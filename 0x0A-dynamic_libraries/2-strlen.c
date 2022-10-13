#include "main.h"
/**
 * _strlen - Checks the code
 *
 * @s: input s
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}

