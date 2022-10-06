#include "main.h"
int squareroot(int n, int i);
/**
 * _sqrt_recursion - square root of a number
 * @n: number
 * Return: square root else return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}

/**
 * squareroot - checks to see if perfect square
 * @n: input
 * @i: count
 * Return: only if square root exists
 */

int squareroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i - 1));
}


