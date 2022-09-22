#include "main.h"
/**
 * _isupper - checks the code
 *@c: the character we are checking if its uppercase
 * Return: 1 if c is upper else 0
 */

int _isupper(int c);

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
