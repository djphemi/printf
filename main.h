#ifndef _HEADER_
#define _HEADER_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct placeholder_struct - struct of placeholder
 * @placeholder: type to print
 * @f: function to print
 */

typedef struct placeholder_struct
{
	char *placeholder;
	int (*f)(va_list list);
} ph_str;

int _putchar(char c);
void recursion_bin(int a);
void recursion_int(int a);
int print_char(va_list list);
int print_string(va_list list);
int print_int(va_list list);
int print_binary(va_list list);
int check_if_is_specifier(char _type);
int print_if_not_specifier(char prev_format, char format, int count);
int print_if_specifier(char format, va_list list);
int format_checker(const char *format, va_list);
int _printf(const char *format, ...);

#endif
