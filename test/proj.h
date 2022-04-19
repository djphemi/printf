#include <stdio.h>

#ifndef PROJ_H
#define PROJ_H
int _putchar(char c);
int print_character(va_list arg);
int print_string(va_list arg);
void _puts(char *str);
int _strlen(char *s);
char *convert_to(char represent[], unsigned int num, int base);
#endif
