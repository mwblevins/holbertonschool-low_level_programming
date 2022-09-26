#include "main.h"
/**
 * print_rev - Checks the code
 *
 * @s: input s
 *
 * Return: void
 */

void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
	_putchar('\n');
}


