#include <stdio.h>
#include "main.h"
/**
 * print_array - Checks the code
 *
 * @a: array to print
 * @n: number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", *a);
			break;
		}
		printf("%d, ", *a);
		a++;
	}
	printf("\n");
}
