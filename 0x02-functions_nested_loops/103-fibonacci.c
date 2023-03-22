#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even  number < 4,000,000
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, s = 0;
	int sum = 0;

	while (s < 4000000)
	{
		s = a + b;
		a = b;
		b = s;
		if (s % 2 == 0)
			sum += s;
	}
	printf("%i\n", sum);
	return (0);
}

