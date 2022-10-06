#include "main.h"
/**
 * _sqrt_recursion - square root of a number
 * @n: number
 * Return: square root else return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (squareroot(n, 2));
}

/**
 * squareroot - checks to see if perfect square
 * @n: input
 * @i: count
 * Return: only if square root exists
 */

int squareroot(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + squareroot(n, i + 1));
}


