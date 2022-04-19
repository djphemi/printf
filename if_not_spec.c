#include "main.h"

/**
 * print_if_not_specifier - prints if a character is not a specifier
 * @prev_format : previous character
 * @format : character
 * @count : number of characters printed up till then
 * Return: number of character
 */

int print_if_not_specifier(char prev_format, char format, int count)
{
	count += _putchar('%');

	if (prev_format == ' ')
	{
		count += _putchar(' ');
		count += _putchar(format);
	}
	else
	{
		count += _putchar(format);
	}

	return (count);
}
