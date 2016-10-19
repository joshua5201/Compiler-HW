%{
#define LIST                { strncat(buf, yytext, sizeof(buf) - strlen(buf) - 1); }
#define token(t)            { LIST; if (opt_token) printf("<%s>\n", #t); }
#define token_string(t, s)   { LIST; if (opt_token) printf("<%s:%s>\n", t, s); }
#define MAX_LINE_LENGTH 257
#define MAX_ID_LENGTH 257
int opt_source = 1;
int opt_token = 1;
int opt_statistic = 1;
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
}

<INITIAL>\) {
    token_string("delim", ")");
}

<INITIAL>\{ {
    token_string("delim", "{");
}

<INITIAL>\} {
    token_string("delim", "}");
}

<INITIAL>\[ {
    token_string("delim", "[");
}

<INITIAL>\] {
    token_string("delim", "]");
}

<INITIAL>, {
    token_string("delim", ",");
}

<INITIAL>; {
    token_string("delim", ";");
}

<INITIAL>\+ {
    token("+");
}

<INITIAL>\- {
    token("-");
}

<INITIAL>\* {
    token("*");
}

<INITIAL>\/ {
    token("/");
}

<INITIAL>\% {
    token("%");
}

<INITIAL>= {
    token("=");
}

<INITIAL>\<= {
    token("<=");
}

<INITIAL>\>= {
    token("<=");
}

<INITIAL>!= {
    token("!=");
}

<INITIAL>== {
    token("==");
}

<INITIAL>\< {
    token("<");
}

<INITIAL>\> {
    token(">");
}

<INITIAL>&& {
    token("&&");
}

<INITIAL>\|\| {
    token("||");
}

<INITIAL>! {
    token("!");
}

<INITIAL>while {
    token_string("KW", "while");
}

<INITIAL>do {
    token_string("KW", "do");
}

<INITIAL>if {
    token_string("KW", "if");
}

<INITIAL>else {
    token_string("KW", "else");
}

<INITIAL>true {
    token_string("KW", "true");
}

<INITIAL>false {
    token_string("KW", "false");
}

<INITIAL>for {
    token_string("KW", "for");
}

<INITIAL>int {
    token_string("KW", "int");
}

<INITIAL>const {
    token_string("KW", "const");
}

<INITIAL>read {
    token_string("KW", "read");
}

<INITIAL>boolean {
    token_string("KW", "boolean");
}

<INITIAL>bool {
    token_string("KW", "bool");
}

<INITIAL>void {
    token_string("KW", "void");
}

<INITIAL>float {
    token_string("KW", "float");
}

<INITIAL>double {
    token_string("KW", "double");
}

<INITIAL>string {
    token_string("KW", "string");
}

<INITIAL>continue {
    token_string("KW", "continue");
}

<INITIAL>break {
    token_string("KW", "break");
}

<INITIAL>return {
    token_string("KW", "return");
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
}

<INITIAL>[a-zA-Z_][a-zA-Z_1-9]* {
    token_string("id", yytext);
    add_identifier(yytext);
}

<INITIAL>([1-9][0-9]*)|0 {
    token_string("integer", yytext);
}

<INITIAL>[0-9]+\.[0-9]+ {
    token_string("float", yytext);
}

<INITIAL>[0-9]*(\.[0-9]+)?[eE][+-]?[0-9]+ {
    token_string("scientific", yytext);
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
int main( int argc, char **argv )
{
    if (argc >= 2) {
        yyin = fopen( argv[1], "r" );
        if ( NULL == yyin ) {
            fprintf( stderr, "Cannot open: %s\n", argv[1] );
            exit(-1);
        }
    }
    else {
        yyin = stdin;
    }

    yylex();

    if (opt_statistic) {
        print_statistic();
        delete_statistic();
    }

    exit(0);
}
