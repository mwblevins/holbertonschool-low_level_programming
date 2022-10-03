#include "main.h"
/**
 * _strchr - check the code
 * @s: string
 * @c: first occurence
 *
 * Return: pointer to c
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}

