all: lex parser build

lex:
	lex lex.l

parser: 
	yacc -d -v parser.y

build:
	gcc symbol.c lex.yy.c y.tab.c -std=gnu99 -O2 -lfl -ly -o parser

test: symbol_test

symbol_test:
	gcc symbol.c symbol_test.c -std=gnu99 -O2 -o symbol_test

clean:
	rm parser symbol_test

