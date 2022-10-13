#include "main.h"
/**
 * _puts - Checks the code
 *
 * @str: input str
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}


