#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - Prints a char.
 * @c: The char to print.
 * @separator: The separator string.
 */
void print_char(char c, char *separator)
{
	printf("%s%c", separator, c);
}
/**
 * print_integer - Prints an integer.
 * @num: The integer to print.
 * @separator: The separator string.
 */
void print_integer(int num, char *separator)
{
	printf("%s%d", separator, num);
}

/**
 * print_float - Prints a float.
 * @f: The float to print.
 * @separator: The separator string.
 */
void print_float(float f, char *separator)
{
	printf("%s%f", separator, f);
}
/**
 * print_string - Prints a string.
 * @s: The string to print.
 * @separator: The separator string.
 */
void print_string(char *s, char *separator)
{
	if (s == NULL)
		printf("%s(nil)", separator);
	else
		printf("%s%s", separator, s);
}
/**
 * print_all - Prints any combination of char, int, float, and string.
 * @format: A list of types of arguments to print.
 * @...: The values to print.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_char(va_arg(args, int), separator);
				break;

			case 'i':
				print_integer(va_arg(args, int), separator);
				break;

			case 'f':
				print_float((float)va_arg(args, double), separator);
				break;

			case 's':
				print_string(va_arg(args, char *), separator);
				break;

			default:
				i++;
				continue;
		}

		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
