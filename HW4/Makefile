all: lex parser build

lex:
	lex lex.l

parser: 
	yacc -d -v parser.y

build:
	gcc compiler_utils.c actions.c lex.yy.c y.tab.c -std=gnu99 -lfl -ly -O2 -o compiler

clean:
	rm compiler lex.yy.c y.output y.tab.c y.tab.h

