#include "main.h"

/**
 * print_binary - function that prints a binary from an integer input
 *
 * @list : arguments passed into _printf()
 *
 * Return: number of characters printed
 */

int print_binary(va_list list)
{
	int x, b, new;

	x = 0;
	b = 0;
	new = 0;

	new = va_arg(list, int);
	x = new;

	if (new < 0)
	{
		_putchar('1');
		new *= -1;
		x = new;
		b += 1;
	}

	while (x > 0)
	{
		x = x / 2;
		b++;
	}

	recursion_bin(new);
	return (b);
}

/**
 * recursion_bin - A function that prints a binary number by recursion
 *
 * @a : the number to be converted
 *
 * Return: void
 */

void recursion_bin(int a)
{
	int t;

	t = a;

	if (t / 2)
		recursion_bin(t / 2);
	_putchar(t % 2 + '0');
}
