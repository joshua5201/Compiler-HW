all: lex parser build

lex:
	lex lex.l

parser: 
	yacc -d -v parser.y

build:
	gcc lex.yy.c y.tab.c -std=gnu99 -O2 -lfl -ly -o parser

clean:
	rm y.output  y.tab.c  y.tab.h lex.yy.c parser -f

test: 
	bash test.sh
