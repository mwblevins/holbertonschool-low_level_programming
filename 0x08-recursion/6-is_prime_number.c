#include "main.h"
/**
 * prime - detects if input is a prime number
 * @n: input number
 * @c: counter
 * Return: 1 if is prime, else 0
 */

int prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, c + 1));
}
/**
 * is_prime_number - checks if the input is prime
 *@n: input number
 *Return: 1 if prime else returns 0
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
