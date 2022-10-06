#include "main.h"

/**
 * _pow_recursion - Raised to the power of
 * @x: number being raised
 * @y: power of
 * Return: value of x raised by the power of y
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}

