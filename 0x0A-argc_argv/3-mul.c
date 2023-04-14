#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int nb1, nb2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[2]);
	mul = nb1 * nb2;

	printf("%d\n", mul);
	return (0);
}
