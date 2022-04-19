#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int print_character(va_list arg);
int print_string(va_list arg);
void _puts(char *str);
int _strlen(char *s);
char *convert_to(char represent[], unsigned int num, int base);


/**
 * print_character - prints cahracter
 * @arg: va_list para
 * Return: 1
 */

int print_character(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	_putchar(i);

	return (1);
}

/**
 * print_sign -print sign
 * @arg: va_list para
 * @base: base 10, 8, 16 etc
 * Description: print numbers
 * Return:numbr of character
 */

int print_sign(va_list arg, int base)
{
	int i = 0, cont = 0;
	char *s;

	i = va_arg(arg, int);
	if (i < 0)
	{
		i = -(i);
		_putchar('-');
		cont += 1;
	}
	s = convert_to("0123456789ABCDEF", i, base);
	_puts(s);
	cont += _strlen(s);
	return (cont);
}

/**
 * print_unsign - print unsign
 * @arg: va_list para
 * @base: base 10, 8, 16 etc
 * Description: print numbers
 * Return:numbr of character
 */

int print_unsign(va_list arg, int base)
{
	int cont = 0;
	unsigned int i;
	char *s;

	i = va_arg(arg, unsigned int);
	s = convert_to("0123456789ABCDEF", i, base);
	_puts(s);
	cont = _strlen(s);

	return (cont);
}

/**
 * print_string- print string
 * @arg: va_list para
 * Description: print string
 * Return:numbr of character
 */

int print_string(va_list arg)
{
	char *s;
	int cont = 0;


	s = va_arg(arg, char *);
	if (!s)
	{
		s = "(null)";
		_puts(s);

		return (_strlen(s));
	}

	_puts(s);
	cont = _strlen(s);
	return (cont);
}

/**
 * print_hex- print base 16
 * @arg: va_arg para
 * @represent: pointer parameter
 * Return: num of character
 */

int print_hex(va_list arg, char *represent)
{
	unsigned int i = 0, cont = 0;
	char *s;

	i = va_arg(arg, unsigned int);
	s = convert_to(represent, i, 16);
	_puts(s);
	cont = strlen(s);
	return (cont);
}
