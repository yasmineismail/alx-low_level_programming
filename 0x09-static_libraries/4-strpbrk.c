#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - bytes
 * @s: pointer
 * @accept: pointer
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *p_s = s;

	while (*p_s)
	{
		char *p_accept = accept;

		while (*p_accept)
		{
			if (*p_s == *p_accept)
			{
				return (p_s);
			}
			p_accept++;
		}
	p_s++;
	}
	return (NULL);
}
