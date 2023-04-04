/**
 * _memset -  fills memory with a constant byte.
 * @s: pointer
 * @b: data
 * @n: integer
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
