#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: pointer to the string to check
 * Return: int
*/


int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
