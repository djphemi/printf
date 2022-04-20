#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints a formated string
 * @format: string to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0, validator = 0, side_count = 0, total_count = 0, i = 0;
	va_list ap;

	if (format == 0)
	{
		return (-1);
	}

	va_start(ap, format);
	validator = check_string(format);

	if (validator == 0)
	{
		total_count = p_string(format);
		return (total_count);
	}
	while (format[i] != 0)
	{
		if (format[i] == '%')
		{
			if (check_next_char(format + i))
			{
				if (format[i + 1] == 's')
					side_count += p_string(va_arg(ap, const char *));
				else if (format[i + 1] == 'c')
					side_count += p_char(va_arg(ap, int));
				else if (format[i + 1] == 'd' || format[i + 1] == 'i')
					side_count += get_func_int(format[i + 1])(va_arg(ap, int));
				i += 2;
			}
			else
			{
				if (format[i + 1] == '%')
					i++;
				count += p_char(format[i]);
				i++;
			}
		}
		else
		{
			count += p_char(format[i]);
			i++;
		}
	}
	total_count = side_count + count;
	va_end(ap);
	return (total_count);
}
