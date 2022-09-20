#include "main.h"

/**
 * print_sign - check the code
 *
 *@n: The input number
 * Return: 1 if greater, -1 if lower, else 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	_putchar('\n');
}
