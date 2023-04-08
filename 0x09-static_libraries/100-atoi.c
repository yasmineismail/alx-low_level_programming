
#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char
 * Return: integer
 */

int _atoi(char *s)
{
	int i;
	int res = 0;
	int sign = -1;
	int b = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
			res -= (s[i] - '0');
			b = 1;
		}
		else if (b == 1)
			break;
	}
	res = sign * res;
	return (res);
}
