#include "main.h"

/**
 * _isalpha - check the code
 *
 *@c: The character in ASCII
 * Return: 1 if c is a letter lowercase or uppercase, else return 0.
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
