%{
#include "y.tab.h"
#include "parser_utils.h"
#include "actions.h"
#include <stdlib.h>
#define LIST                { strncat(buf, yytext, sizeof(buf) - strlen(buf) - 1); }
#define token(t)            { LIST; if (opt_token) printf("<%s>\n", #t); }
#define token_string(t, s)   { LIST; if (opt_token) printf("<%s:%s>\n", t, s); }
#define MAX_LINE_LENGTH 257
#define MAX_ID_LENGTH 257
int opt_source = 0;
int opt_token = 0;
int opt_statistic = 0;
int opt_symbol = 0;
int linenum = 1;
char buf[MAX_LINE_LENGTH];
static void print();
static void add_identifier(char *);

%}

%START COMMENT PRAGMA AFTER_PRAGMA COMMENT_AFTER_PRAGMA
%%

<INITIAL>"#pragma" {
    LIST;
    BEGIN PRAGMA;
}

<PRAGMA>source[\t ]+on {
    LIST;
    opt_source = 1;
    BEGIN AFTER_PRAGMA;
}

<PRAGMA>source[\t ]+off {
    LIST;
    opt_source = 0;
    BEGIN AFTER_PRAGMA;
}

<PRAGMA>statistic[\t ]+on {
    LIST;
    opt_statistic = 1;
    BEGIN AFTER_PRAGMA;
}

<PRAGMA>statistic[\t ]+off {
    LIST;
    opt_statistic = 0;
    BEGIN AFTER_PRAGMA;
}

<PRAGMA>token[\t ]+on {
    LIST;
    opt_token = 1;
    BEGIN AFTER_PRAGMA;
}

<PRAGMA>token[\t ]+off {
    LIST;
    opt_token = 0;
    BEGIN AFTER_PRAGMA;
}

<PRAGMA>symbol[\t ]+on {
    LIST;
    opt_symbol = 1;
    BEGIN AFTER_PRAGMA;
}

<PRAGMA>symbol[\t ]+off {
    LIST;
    opt_symbol = 0;
    BEGIN AFTER_PRAGMA;
}


<INITIAL,AFTER_PRAGMA>\/\/.*$ {
    LIST;
    BEGIN INITIAL;
}

<AFTER_PRAGMA>"/*" {
    LIST;
    BEGIN COMMENT_AFTER_PRAGMA;
}

<INITIAL>"/*" {
    LIST;
    BEGIN COMMENT;
}

<COMMENT,COMMENT_AFTER_PRAGMA>"/*" {
    LIST;
}

<COMMENT_AFTER_PRAGMA>.*\*\/ {
    LIST;
    BEGIN AFTER_PRAGMA;
} 

<COMMENT>.*\*\/ {
    LIST;
    BEGIN INITIAL;
} 

<COMMENT,INITIAL>\n {
    print();
}

<COMMENT_AFTER_PRAGMA>\n { 
    LIST;
    fprintf(stderr, "Error at line %d: %s\n", linenum, buf);
    exit(1);
}

<AFTER_PRAGMA>\n {
    print();
    BEGIN INITIAL;
}

<COMMENT,COMMENT_AFTER_PRAGMA>. {
    LIST;
}

<INITIAL>\( {
    token_string("delim", "(");
    return '(';
}

<INITIAL>\) {
    token_string("delim", ")");
    return ')';
}

<INITIAL>\{ {
    token_string("delim", "{");
    return '{';
}

<INITIAL>\} {
    token_string("delim", "}");
    return '}';
}

<INITIAL>"[" {
    token_string("delim", "[");
    return '[';
}

<INITIAL>\] {
    token_string("delim", "]");
    return ']';
}

<INITIAL>, {
    token_string("delim", ",");
    return ',';
}

<INITIAL>; {
    token_string("delim", ";");
    return SEMICOLON;
}

<INITIAL>\+ {
    token("+");
    return '+';
}

<INITIAL>\- {
    token("-");
    return '-';
}

<INITIAL>\* {
    token("*");
    return '*';
}

<INITIAL>\/ {
    token("/");
    return '/';
}

<INITIAL>\% {
    token("%");
    return '%';
}

<INITIAL>= {
    token("=");
    return '=';
}

<INITIAL>\<= {
    token("<=");
    return LEQ;
}

<INITIAL>\>= {
    token(">=");
    return GEQ;
}

<INITIAL>!= {
    token("!=");
    return NEQ;
}

<INITIAL>== {
    token("==");
    return EQ;
}

<INITIAL>\< {
    token("<");
    return '<';
}

<INITIAL>\> {
    token(">");
    return '>';
}

<INITIAL>&& {
    token("&&");
    return AND;
}

<INITIAL>\|\| {
    token("||");
    return OR;
}

<INITIAL>! {
    token("!");
    return '!';
}

<INITIAL>while {
    token_string("KW", "while");
    return WHILE;
}

<INITIAL>do {
    token_string("KW", "do");
    return DO;
}

<INITIAL>if {
    token_string("KW", "if");
    return IF;
}

<INITIAL>else {
    token_string("KW", "else");
    return ELSE;
}

<INITIAL>true {
    token_string("KW", "true");
    return TRUE;
}

<INITIAL>false {
    token_string("KW", "false");
    return FALSE;
}

<INITIAL>for {
    token_string("KW", "for");
    return FOR;
}

<INITIAL>int {
    token_string("KW", "int");
    return INT;
}

<INITIAL>const {
    token_string("KW", "const");
    return CONST;
}

<INITIAL>read {
    token_string("KW", "read");
    return READ;
}

<INITIAL>bool {
    token_string("KW", "bool");
    return BOOL;
}

<INITIAL>void {
    token_string("KW", "void");
    return VOID;
}

<INITIAL>float {
    token_string("KW", "float");
    return FLOAT;
}

<INITIAL>double {
    token_string("KW", "double");
    return DOUBLE;
}

<INITIAL>string {
    token_string("KW", "string");
    return STRING;
}

<INITIAL>continue {
    token_string("KW", "continue");
    return CONTINUE;
}

<INITIAL>break {
    token_string("KW", "break");
    return BREAK;
}

<INITIAL>print {
    token_string("KW", "print");
    return PRINT;
}

<INITIAL>return {
    token_string("KW", "return");
    return RETURN;
}

<INITIAL>\"(\\?[\40-\41\43-\47\50-\133\135-\176]|\\[\"\\])*\" {
    char *filtered = malloc(sizeof(char) * yyleng);
    int new_length = 0;
    int escaped = 0;
    for (int i = 1; i < yyleng - 1; i++) {
        if (!escaped && i + 1 < yyleng - 1 && yytext[i] == '\\' && (yytext[i + 1] == '"' || yytext[i + 1] == '\\')) {
            escaped = 1;
            continue;
        }
        escaped = 0;
        filtered[new_length++] = yytext[i];
    }
    filtered[new_length] = '\0';
    token_string("string", filtered);
    yylval.strval = strdup(filtered);
    return STRING_LITERAL;
}

<INITIAL>[a-zA-Z_][a-zA-Z_1-9]* {
    token_string("id", yytext);
    add_identifier(yytext);
    yylval.id = make_id(NULL, yytext);
    return ID;
}

<INITIAL>([1-9][0-9]*)|0 {
    token_string("integer", yytext);
    yylval.val = atoi(yytext);
    return INT_LITERAL;
}

<INITIAL>[0-9]+\.[0-9]+ {
    token_string("float", yytext);
    yylval.lfval = atof(yytext);
    return FLOAT_LITERAL;
}

<INITIAL>[0-9]*(\.[0-9]+)?[eE][+-]?[0-9]+ {
    token_string("scientific", yytext);
    sscanf(yytext, "%lf", &yylval.lfval); 
    return SCIENTIFIC_LITERAL;
}

[ \t] {
    LIST;
};


<PRAGMA,INITIAL,AFTER_PRAGMA>. { // Unrecognized character
    fprintf(stderr, "Error at line %d: %s\n", linenum, yytext);
    exit(1);
}


%%

struct Iden {
    int count;
    char *content;
    struct Iden *next;
    struct Iden *prev;
};

static struct Iden *root = NULL;
static struct Iden *tail = NULL;
void add_identifier(char *s)
{
    int len = strlen(s);
    struct Iden *curr = tail;
    while (1) {
        if (curr == root) {
            curr = malloc(sizeof(struct Iden));
            curr->next = NULL;
            curr->prev = NULL;
            if (tail == NULL) {
                root = tail = curr;
            } else {
                tail->next = curr;
                curr->prev = tail;
                tail = curr;
            }
            curr->count = 1;
            curr->content = malloc(sizeof(char) * len + 1);
            strcpy(curr->content, s);
            return ;
        }

        int res = strcmp(curr->content, s);
        if (res == 0) {
            curr->count += 1;
            return ;
        } else {
            curr = curr->prev;
        }
    }
}

static void print()
{
    if (opt_source)
        printf("%d:%s\n", linenum, buf);
    ++linenum;
    buf[0] = '\0';
}

void print_statistic()
{
    puts("frequencies of identifiers: ");
    struct Iden *curr = root;
    while (curr) {
        printf("%-10s: %d\n", curr->content, curr->count);
        curr = curr->next;
    }
}

void delete_statistic()
{
    struct Iden *curr = root;
    while (curr) {
        struct Iden *old = curr;
        curr = curr->next;
        free(old);
        old = NULL;
    }
}
