#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
* p_uint - prints unsigned int to standard output
*
* @a: unsigned int to be printed
*
* Return: count
*
*/

int p_uint(unsigned int a)
{
	int count_recursion = 0;

	if (a / 10 > 0)
	{
		count_recursion += 1 + p_uint(a / 10);
	}
	p_char((a % 10) + '0');
	return (count_recursion);
}
