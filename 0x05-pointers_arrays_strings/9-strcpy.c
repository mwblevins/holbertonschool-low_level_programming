#include "main.h"
#include <stddef.h>
/**
 * _strcpy - Checks the code
 *
 * @dest: destination
 * @src: Source
 *
 * Return: if NULL NUll, else destination
 */

char *_strcpy(char *dest, char *src)
{
	if (dest == NULL)
	return (NULL);

	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


