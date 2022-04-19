#include "main.h"

/**
 * _printf - a function that acts like the printf()
 *
 * @format : the format to be printed
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int length = 0;

	length = 0;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	length = format_checker(format, list);
	va_end(list);

	return (length);
}
