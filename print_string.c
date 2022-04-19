#include "main.h"

/**
 * print_string - prints string
 * @list : list of arguments passed
 * Return: 6
 */

int print_string(va_list list)
{
	int i;
	char *arg;

	arg = va_arg(list, char *);

	i = 0;
	if (arg != NULL)
	{
		while (arg[i])
		{
			_putchar(arg[i]);
			i++;
		}

		return (i);
	}

	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');
	return (6);
}
