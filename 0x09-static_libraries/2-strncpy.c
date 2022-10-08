#include "main.h"

/**
 * _strncpy - concatenate two strings
 * @n: input
 * @dest: Destination
 * @src: Source
 *
 * Return: pointer for destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
