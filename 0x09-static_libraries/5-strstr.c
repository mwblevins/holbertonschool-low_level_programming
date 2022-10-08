#include "main.h"
/**
 *_strstr - check code
 *@haystack: string
 *@needle: second
 *Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && needle[j] == haystack[i + j]; j++)
		{; }
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return ('\0');
}
