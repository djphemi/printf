#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
* p_int_d - prints int to standard output
*
* @a: integer to be printed
*
* Return: count + 1
*/

int p_int_d(int a)
{
	int count = 0;

	if (a < 0)
	{
		count = p_char('-');
		a = -a;
	}
	count += p_uint(a);
	return (count + 1);
}
