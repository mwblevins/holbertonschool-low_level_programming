#include <stdio.h>

/**
 * main - Success
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int ch;

	int i;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
