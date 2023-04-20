#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1 or 2
 */
int main(int argc, char **argv)
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	char *main_ptr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%.2hhx", main_ptr[i]);

		if (i != bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
