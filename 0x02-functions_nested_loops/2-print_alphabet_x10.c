#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
{
		for (b = 97; b <= 127; b++)
		{
			_putchar(b);
		}
}
	_putchar('\n');

}
