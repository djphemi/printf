#include "main.h"

/**
 * print_char - function that prints a character
 *
 * @list : the list of arguments passed into _printf()
 *
 * Return: 1
 */

int print_char(va_list list)
{
	char character;

	character = va_arg(list, int);

	_putchar(character);
	return (1);
}
