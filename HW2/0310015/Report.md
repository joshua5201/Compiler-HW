# HW2 parser

## Changes to lex.l
* When the scanner finds a token, it returns an int (char) to yacc. It can be a character literal like '+' or a const like RETURN defined in parser.y.
* Add `#include "y.tab.h"` to the head of the lexer.
* Remove the main function.

## Abilities of My Parser

All features in the spec is implemented.

## Platform

* Archlinux 64 bit
* gcc 6.2.1
* flex 2.6.1
* yacc (GNU bison) 3.0.4

## How to Run My Parser

```bash
make
./parser [source]
```
