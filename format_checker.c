#include "main.h"

/**
 * format_checker - checks characters
 * @format: the specifier
 * @list: list from _printf
 * Return: number of characters
 */

int format_checker(const char *format, va_list list)
{
	int count, i;

	count = 0;
	i = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;

			while (format[i] == ' ')
				i++;
			if (format[i] == '%')
				count += _putchar(format[i]);

			if  (check_if_is_specifier(format[i] == 0))
			{
				count = print_if_not_specifier(format[i - 1], format[i], count);
			}
			else
				count += print_if_specifier(format[i], list);
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	return (count);
}
