all: lex build

lex:
	lex lex.l

build:
	gcc lex.yy.c -std=gnu99 -O2 -lfl -o scanner 
