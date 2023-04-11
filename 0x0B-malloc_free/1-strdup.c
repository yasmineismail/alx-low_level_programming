#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copy of the string given as a parameter.
 * @str: pointer
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *copy;
	int i = 0, j;

	if (!str)
		return (NULL);

	while (*(str + i))
		i++;
	i++;
	copy = malloc(sizeof(char) * i);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		copy[j] = str[j];
	}
	return (copy);
}
