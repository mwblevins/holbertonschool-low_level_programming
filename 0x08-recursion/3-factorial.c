#include "main.h"

/**
 * factorial - factorial of a number
 * @n: number
 * Return: factorial total or -1 for error
 */

int factorial(int n)
{
	if (n >= 0)
		return (n * factorial(n - 1));
	else
		return (-1);
}

