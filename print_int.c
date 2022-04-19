#include "main.h"
/**
 * print_int - function that prints an integer
 *
 * @list : list
 *
 * Return: number of characters printed
 */

int print_int(va_list list)
{
	int count, m, n;

	count = 1;
	m = 0;
	n = 0;

	n = va_arg(list, int);

	m = n;
	if (m < 0)
	{
		_putchar('-');
		m = m * -1;
		n = m;
		count += 1;
	}

	while (n > 9)
	{
		n = n / 10;
		count++;
	}

	recursion_int(m);
	return (count);
}


/**
 * recursion_int - a function that prints an integer by recursion
 *
 * @a : the integer to be printed
 *
 * Return: the number of characters printed
 */

void recursion_int(int a)
{
	unsigned int t;

	t = a;
	if (t / 10)
		recursion_int(t / 10);
	_putchar(t % 10 + '0');
}
