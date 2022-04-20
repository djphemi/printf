#include "main.h"

/**
 * get_func_int - checks c and returns corresponding function
 * @c: character to check
 * Return: function
 */
int (*get_func_int(char c))(int)
{
	int i = 0;

	ptr_f AOCWCF[2] = {
		{'d', p_int_d},
		{'i', p_int_d}
		};

	while (i < 3)
	{
		if (c == AOCWCF[i].c)
			return (AOCWCF[i].f);
		i++;
	}
	return (0);
}
