#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of program
 * @ac: int
 * @av: pointer
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int i, n, k = 0, len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		s[k] = av[i][n];
		k++;
	}
	if (s[k] == '\0')
	{
		s[k++] = '\n';
	}
	}
	return (s);
}
