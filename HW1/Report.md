# Compiler Project 1 Report

0310015 蕭從恩

## Abilities of the Scanner

1. Can do all the requirements of this project.
2. Output identifier statistics by the order of occurence. My impletation is a doubly linked list. I found that when we write a program, the identifiers we use are usually near to where they were declared. So, when adding an identifier, the scanner search from the tail of the list. If no match was found, it will append the identifier to the tail of ther list.

## Platform Information about the Scanner

1. gcc 6.2.1
2. lex 2.6.1
3. Archlinux

## How to Run the Scanner

1. make
2. ./scanner [input file]
