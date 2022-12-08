#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char *buffer;
	size_t bufsize = 32;
	size_t characters;

	buffer = (char *)malloc(bufsize * sizeof(char));
	printf("input");
	characters = getline(&buffer,&bufsize,stdin);

	printf("%zu characters were read.\n", characters);

	char delim[] = " ";

	char *ptr = strtok(buffer, delim);

	while(ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}
	free(buffer);
	return (0);
}


