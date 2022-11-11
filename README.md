# _printf

Recreating the printf function used in C programming language.
## Description

_printf is used when the user wants to print to standard output. Currently this function supports only
char , string and int printing. It takes a placeholder to check the type of the variable to print and takes the value of the variable itself and prints it to standard output.


## Usage

```
char c = H;

_printf("This is a char: %c", c);

Output - This is a char : H
```
```
char *s = "Hi";

_printf("This is a string: %s", s);

Output - This is string : Hi
```
```
int i = 93;

_printf("This is an int: %s", i);

Output - This is string : 93
```
## Compilation and files

Compilation is made using the following flags and commands :

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
functionts.c - This file holds the main functions that are used to check each case and calls the proper function depending on case.

main.h - This is the header file which holds all prototypes, libraries and structure definition.

man_3_printf - Man page for _printf

_putchar.c - function used for printing.
