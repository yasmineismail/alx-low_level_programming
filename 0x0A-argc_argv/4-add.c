#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];
		int j;

		for (j = 0; num[j] != '\0'; j++)
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(num);
	}
	printf("%d\n", sum);
	return (0);
}
