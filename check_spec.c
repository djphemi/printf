#include "main.h"

/**
 * check_if_is_specifier - checks if a character is a placeholder or not
 *
 * @_type : the character
 *
 * Return: 1 if character is a specifier or 0 if it is not
 */

int check_if_is_specifier(char _type)
{
	char specifier_list[] = {'c', 's', 'd', 'i', 'b', '%'};

	int i;

	i = 0;

	while (specifier_list[i])
	{
		if (specifier_list[i] == _type)
			return (1);
		i++;
	}

	return (0);
}
