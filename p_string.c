#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
* p_string - prints string to standard output
*
* @s: string to be printed
*
* Return: count
*
*/
int p_string(const char *s)
{
	int count = 0, i = 0;

	if (s == 0)
		return (p_string("(null)"));

	while (s[i] != 0)
	{
		count += p_char(s[i]);
		i++;
	}
	return (count);
}
