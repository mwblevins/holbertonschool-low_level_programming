#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	(void) ac;
	int i;

	for (i = 0;av[i] != NULL; i++)
	printf("%d\n", i);
	return (1);
}
