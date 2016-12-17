%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int linenum;             /* declared in lex.l */
extern FILE *yyin;              /* declared by lex */
extern char *yytext;            /* declared by lex */
extern char buf[256];           /* declared in lex.l */
%}

%token SEMICOLON    /* ; */
%token ID           /* identifier */
%token INT WHILE DO IF ELSE TRUE FALSE FOR CONST READ BOOLEAN BOOL VOID FLOAT DOUBLE STRING CONTINUE BREAK RETURN PRINT
%token STRING_LITERAL FLOAT_LITERAL INT_LITERAL SCIENTIFIC_LITERAL
%token OR AND EQ NEQ GEQ LEQ
%left OR
%left AND
%left '!'
%left '<' LEQ EQ GEQ '>' NEQ
%left '+' '-'
%left '*' '/' '%'

%%

program : decl_and_def_list func_def decl_and_def_list
        | func_def decl_and_def_list
        | decl_and_def_list func_def
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

expr : expr OR expr
     | expr AND expr
     | expr EQ expr
     | expr NEQ expr
     | expr GEQ expr
     | expr LEQ expr
     | expr '>' expr
     | expr '<' expr
     | expr '+' expr
     | expr '-' expr
     | expr '*' expr
     | expr '/' expr
     | expr '%' expr
     | '(' expr ')'
     | '-' expr
     | '!' expr
     | ID
     | literal
     | func_invoke
     | array_ref
     | assignment
     ;

array_ref : array_ref '[' expr ']'
          | ID '[' expr ']'
          ;

func_invoke : ID '(' param_list ')'
            | ID '(' ')' 
            ;

param_list : param_list ',' expr
           | expr
           ;

var_decl : type identifier_list SEMICOLON ;

identifier_list : identifier_list ',' identifier
                | identifier_list ',' assignment
                | assignment
                | identifier
                ;

assignment : identifier '=' expr;

literal : STRING_LITERAL
        | FLOAT_LITERAL
        | INT_LITERAL
        | SCIENTIFIC_LITERAL
        | '-' FLOAT_LITERAL
        | '-' INT_LITERAL
        | '-' SCIENTIFIC_LITERAL
        | array_literal
        | TRUE
        | FALSE
        ;

array_literal : '{' element_list '}'
              | '{' '}'
              ;

element_list : element_list ',' expr
             | expr
             ;

const_decl : CONST type const_list SEMICOLON ;

const_list : const_list ',' ID '=' STRING_LITERAL
           | const_list ',' ID
           | ID
           | ID '=' literal
           ;

func_decl : type ID '(' arg_list ')' SEMICOLON 
          | type ID '(' ')' SEMICOLON 
          | VOID ID '(' arg_list ')' SEMICOLON
          | VOID ID '(' ')' SEMICOLON
          ;

arg_list : arg_list ',' argument 
         | argument
         ;

argument : type identifier ;

func_def : type ID '(' arg_list ')' compound_stmt 
         | type ID '(' ')' compound_stmt 
         | VOID ID '(' arg_list ')' compound_stmt
         | VOID ID '(' ')' compound_stmt 
         ;

type : INT
     | BOOL
     | FLOAT
     | DOUBLE
     | STRING
     ; 

identifier : ID
           | identifier '[' INT_LITERAL ']'
           ;	

stmt : compound_stmt
     | simple_stmt
     | if_stmt
     | while_stmt
     | do_stmt 
     | for_stmt 
     | jump_stmt
     | expr_stmt
     ;

expr_stmt : expr SEMICOLON
          | SEMICOLON
          ;

compound_stmt : '{' block '}' 
              | '{' '}'
              ;

block : block block_element
      | block_element
      ;

block_element : var_decl
              | const_decl
              | stmt
              ;

simple_stmt : variable_ref '=' expr SEMICOLON
            | PRINT expr
            | READ variable_ref
            ;

variable_ref : ID
             | array_ref
             ;

if_stmt : IF '(' expr ')' stmt 
        | IF '(' expr ')' stmt ELSE stmt
        ;

while_stmt : WHILE '(' expr ')' stmt ;

do_stmt : DO stmt WHILE '(' expr ')' SEMICOLON ;

for_stmt : FOR '(' expr_stmt expr_stmt ')' stmt 
         | FOR '(' expr_stmt expr_stmt expr ')' stmt 
         ;

jump_stmt : RETURN expr_stmt
          | BREAK SEMICOLON
          | CONTINUE SEMICOLON
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

int  main( int argc, char **argv )
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

yyin = fp;
    yyparse();

fprintf( stdout, "\n" );
    fprintf( stdout, "|--------------------------------|\n" );
    fprintf( stdout, "|  There is no syntactic error!  |\n" );
    fprintf( stdout, "|--------------------------------|\n" );
    exit(0);
}

