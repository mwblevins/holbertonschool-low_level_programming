#include "main.h"
#include <stddef.h>
/**
 * _strcpy - Checks the code
 *
 * @dest: destination
 * @src: Source
 *
 * Return: if NULL NUll, return_ptr
 */

char *_strcpy(char *dest, char *src)
{
	char *return_ptr = dest;

	if (dest == NULL)
	return (NULL);

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (return_ptr);
}


