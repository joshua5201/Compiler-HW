all: lex parser build

lex:
	lex lex.l

parser: 
	yacc -d -v parser.y

build:
	gcc parser_utils.c actions.c lex.yy.c y.tab.c -std=gnu99 -lfl -ly -O2 -o parser

clean:
	rm parser

