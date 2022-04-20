#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
* check_next_char - checks a string for character specifiers
*
* @c: string to check
*
* Return: 0
*/

int check_next_char(const char *c)
{
	int i = 0, j = 0;
	char *valid_spec = "csid";

	while (c[i] == '%' && c[1] != '%')
	{
		j = 0;
		while (valid_spec[j] != 0)
		{
			if (c[i + 1] == valid_spec[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
