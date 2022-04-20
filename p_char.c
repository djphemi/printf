#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
* p_char - prints char to standard output
*
* @c: character to be printed
*
* Return: c
*/

int p_char(char c)
{
	return (write(1, &c, 1));
}
