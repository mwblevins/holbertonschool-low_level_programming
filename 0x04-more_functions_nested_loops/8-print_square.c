#include "main.h"

/**
 * print_square - checks the code
 *@size: size of the square
 * Return: null
 */

void print_square(int size)

{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}
		if (a < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
