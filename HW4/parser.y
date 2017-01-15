%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "compiler.h"
#include "actions.h"

extern int linenum;
extern FILE *yyin;
extern char *yytext;
extern char buf[256]; 
extern int opt_symbol; 
enum SymbolType should_return = NULL_TYPE;
int last_stmt_is_return = 0;
int in_loop = 0;
%}

%union {
    int count;
    int val;
    float fval;
    double lfval;
    char *strval;
    struct SymbolEntry *sym;
    struct Identifier *id;
    struct Expr *expr;
    struct Assignment *assign;
    struct Literal *literal;
    struct List *list;
};

%token SEMICOLON
%token <id> ID 
%token WHILE DO IF ELSE TRUE FALSE FOR CONST READ CONTINUE BREAK RETURN PRINT
%token <strval> STRING_LITERAL 
%token <lfval> FLOAT_LITERAL SCIENTIFIC_LITERAL  
%token <val> INT_LITERAL 
%token OR AND EQ NEQ GEQ LEQ
%token <val> INT BOOL VOID FLOAT DOUBLE STRING
%type <id> identifier argument
%type <sym> func_decl func_def
%type <val> type
%type <list> arg_list param_list
%type <literal> scaler_literal
%type <assign> scaler_assignment 
%type <expr> expr func_invoke
%left OR
%left AND
%left '!'
%left '<' LEQ EQ GEQ '>' NEQ
%left '+' '-'
%left '*' '/' '%'

%%

program : decl_and_def_list func_def decl_and_def_list { print_table(); print_error(); }
        | func_def decl_and_def_list { print_table(); print_error(); }
        | decl_and_def_list func_def { print_table(); print_error(); }
        ;

decl_and_def_list : decl_and_def_list declaration
                  | decl_and_def_list func_def
                  | declaration
                  | func_def
                  |
                  ;

declaration : const_decl
            | var_decl
            | func_decl
            ;

expr : expr OR expr { $$ = logic_op($1, $3); }
     | expr AND expr { $$ = logic_op($1, $3); }
     | expr EQ expr { $$ = relation_op($1, $3); }
     | expr NEQ expr { $$ = relation_op($1, $3); }
     | expr GEQ expr { $$ = relation_op($1, $3); }
     | expr LEQ expr { $$ = relation_op($1, $3); }
     | expr '>' expr { $$ = relation_op($1, $3); }
     | expr '<' expr { $$ = relation_op($1, $3); }
     | expr '+' expr { $$ = arith_op($1, $3); }
     | expr '-' expr { $$ = arith_op($1, $3); }
     | expr '*' expr { $$ = arith_op($1, $3); }
     | expr '/' expr { $$ = arith_op($1, $3); }
     | expr '%' expr { $$ = modulo_op($1, $3); }
     | '(' expr ')' { $$ = $2; }
     | '-' expr { $$ = negate_op($2); }
     | '!' expr { $$ = not_op($2); }
     | ID { $$ = identifier_expr($1); }
     | scaler_literal { $$ = get_scaler_literal_type($1); }
     | func_invoke { $$ = $1; }
     | scaler_assignment { $$ = assignment_expr($1); }
     ;


func_invoke : ID '(' param_list ')' { $$ = func_invoke($1, $3); }
            | ID '(' ')' { $$ = func_invoke($1, NULL); }
            ;
/* invoke: arg, def: param */
arg_list : arg_list ',' expr { $$ = push_arg($1, $3); }
           | expr { $$ = push_arg(NULL, $1); }
           ;

var_decl : type identifier_list SEMICOLON ;

identifier_list : identifier_list ',' ID { scaler_var_decl($<val>0, $3); }
                | identifier_list ',' scaler_assignment { scaler_var_def($<val>0, $3); }
                | scaler_assignment { scaler_var_def($<val>0, $1); }
                | ID { scaler_var_decl($<val>0, $1); }
                ;
scaler_assignment : ID '=' expr { $$ = scaler_assignment($1, $3); }

scaler_literal : STRING_LITERAL { $$ = make_string($1); }
               | FLOAT_LITERAL { $$ = make_float_lit($1); }
               | INT_LITERAL { $$ = make_int($1); }
               | SCIENTIFIC_LITERAL { $$ = make_float_lit($1); }
               | '-' FLOAT_LITERAL { $$ = make_float_lit(-$2); }
               | '-' INT_LITERAL { $$ = make_int(-$2); }
               | '-' SCIENTIFIC_LITERAL { $$ = make_float_lit(-$2); }
               | TRUE { $$ = make_bool(1); }
               | FALSE { $$ = make_bool(0); }
               ;

const_decl : CONST type const_list SEMICOLON

const_list : const_list ',' ID '=' scaler_literal { const_decl($<val>0, $3, $5); }
           | ID '=' scaler_literal { const_decl($<val>0, $1, $3); }
           ;

func_decl : type ID '(' arg_list ')' SEMICOLON { func_decl($1, $2, $4); }
          | type ID '(' ')' SEMICOLON { func_decl($1, $2, NULL); }
          | VOID ID '(' arg_list ')' SEMICOLON { func_decl(S_VOID, $2, $4); }
          | VOID ID '(' ')' SEMICOLON { func_decl(S_VOID, $2, NULL); }
          ;

arg_list : arg_list ',' argument { $$ = push_arg($1, $3); }
         | argument { $$ = push_arg(NULL, $1); }
         ;

argument : type identifier { $$ = make_arg($1, $2); }

func_def : type ID '(' arg_list ')' { func_def($1, $2, $4); } func_body { pop_scope(); check_return($2); }
         | type ID '(' ')' { func_def($1, $2, NULL); } func_body { pop_scope(); check_return($2); }
         | VOID ID '(' arg_list ')' { func_def(S_VOID, $2, $4); } func_body { pop_scope(); should_return = NULL_TYPE; }
         | VOID ID '(' ')' { func_def(S_VOID, $2, NULL); } func_body { pop_scope(); should_return = NULL_TYPE; }
         ;

type : INT { $$ = S_INT; }
     | BOOL { $$ = S_BOOL; }
     | FLOAT { $$ = S_FLOAT; }
     | DOUBLE { $$ = S_DOUBLE; }
     | STRING { $$ = S_STRING; }
     ; 

identifier : ID { $$ = $1; }
           ;

stmt : compound_stmt { last_stmt_is_return = 0; }
     | simple_stmt { last_stmt_is_return = 0; }
     | if_stmt { last_stmt_is_return = 0; }
     | while_stmt { last_stmt_is_return = 0; }
     | do_stmt  { last_stmt_is_return = 0; }
     | for_stmt  { last_stmt_is_return = 0; }
     | jump_stmt { last_stmt_is_return = 0; }
     | return_stmt { last_stmt_is_return = 1; }
     | expr_stmt { last_stmt_is_return = 0; }
     ;

expr_stmt : expr SEMICOLON
          | SEMICOLON
          ;

func_body : '{' block '}'
          | '{' '}'
          ;

compound_stmt : '{' scope_marker block '}' { pop_scope(); }
              | '{' scope_marker '}' { pop_scope(); }
              ;

scope_marker : { push_scope(); } ;

block : block block_element
      | block_element
      ;

block_element : var_decl { last_stmt_is_return = 0; }
              | const_decl { last_stmt_is_return = 0; }
              | stmt
              ;

simple_stmt : PRINT expr SEMICOLON
            | READ ID SEMICOLON { identifier_expr($2); }
            ;

if_stmt : IF '(' expr ')' stmt { check_cond($3); }
        | IF '(' expr ')' stmt ELSE stmt { check_cond($3); }
        ;

start_loop : { in_loop++; };

end_loop : { in_loop--; };

loop_body : start_loop stmt end_loop ;

while_stmt : WHILE '(' expr ')' loop_body { check_cond($3); } 
           ;

do_stmt : DO loop_body WHILE '(' expr ')' SEMICOLON { check_cond($5); }
        ;

for_stmt : FOR '(' expr_stmt expr SEMICOLON ')' loop_body { check_cond($4); }
         | FOR '(' expr_stmt expr SEMICOLON expr ')' loop_body { check_cond($4); }
         | FOR '(' expr_stmt SEMICOLON expr')' loop_body
         | FOR '(' expr_stmt SEMICOLON ')' loop_body
         ;

return_stmt : RETURN expr SEMICOLON { return_stmt($2); }
            | RETURN SEMICOLON { return_stmt(NULL); }
            ;

jump_stmt : BREAK SEMICOLON { check_jump(); }
          | CONTINUE SEMICOLON { check_jump(); }
          ;

%%

int yyerror( char *msg )
{
    fprintf( stderr, "\n|--------------------------------------------------------------------------\n" );
    fprintf( stderr, "| Error found in Line #%d: %s\n", linenum, buf );
    fprintf( stderr, "|\n" );
    fprintf( stderr, "| Unmatched token: %s\n", yytext );
    fprintf( stderr, "|--------------------------------------------------------------------------\n" );
    exit(-1);
}

int main( int argc, char **argv )
{
    if( argc != 2 ) {
        fprintf(  stdout,  "Usage:  ./parser  [filename]\n"  );
        exit(0);
    }

    FILE *fp = fopen( argv[1], "r" );

    if( fp == NULL )  {
        fprintf( stdout, "Open  file  error\n" );
        exit(-1);
    }
    init_symbol_table();

    yyin = fp;
    yyparse();
    
    if (has_sem_error) {
        fprintf( stdout, "\n" );
        fprintf( stdout, "|---------------------------------------------|\n" );
        fprintf( stdout, "|  There is no syntactic error!               |\n" );
        fprintf( stdout, "|---------------------------------------------|\n" );
        exit(-1);
    }

    fprintf( stdout, "\n" );
    fprintf( stdout, "|---------------------------------------------|\n" );
    fprintf( stdout, "|  There is no syntactic and semantic error!  |\n" );
    fprintf( stdout, "|---------------------------------------------|\n" );
    exit(0);

}

