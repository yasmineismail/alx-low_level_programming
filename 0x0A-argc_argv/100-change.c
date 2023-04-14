#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - prints the minimum number of coins
 * @argc: number of args
 * @argv: array of pointers to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (cents % 25 >= 0)
	{
		coins += cents / 25;
		cents = cents % 25;
	}
	if (cents % 10 >= 0)
	{
		coins += cents / 10;
		cents = cents % 10;
	}
	if (cents % 5 >= 0)
	{
		coins += cents / 5;
		cents = cents % 5;
	}
	if (cents % 2 >= 0)
	{
		coins += cents / 2;
		cents = cents % 2;
	}
	if (cents % 1 >= 0)
	{
		coins += cents / 1;
	}
	printf("%d\n", coins);
	return (0);
}
