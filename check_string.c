#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
* check_string - checks a string for valid specifiers
*
* @c: string to be ckecked
*
* Return: 0
*/

int check_string(const char *c)
{
	int i = 0, j = 0;
	char *valid_spec = "csid";

	while (c[i] != 0)
	{
		if (c[i] == '%')
		{
			j = 0;
			while (valid_spec[j] != 0)
			{
				if (c[i + 1] == valid_spec[j])
					return (2);
				j++;
			}
			return (1);
		}
		i++;
	}
	return (0);
}
