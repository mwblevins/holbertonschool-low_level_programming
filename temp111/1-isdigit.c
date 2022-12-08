#include "main.h"

/**
 * _isdigit - checks the code
 *@c: the character we are checking if its a number
 * Return: 1 if c is a number else 0
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
