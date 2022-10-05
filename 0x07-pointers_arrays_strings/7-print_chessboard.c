#include "main.h"
/**
 *print_chessboard - check code
 *@a: input pointer
 *
 *Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int x, y;

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[y][x]);
		}
		_putchar('\n');
	}
}
