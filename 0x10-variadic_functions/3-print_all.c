#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_char - Prints a character
 * @list: A va_list pointing to the next argument
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_int - Prints an integer
 * @list: A va_list pointing to the next argument
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - Prints a float
 * @list: A va_list pointing to the next argument
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_str - Prints a string
 * @list: A va_list pointing to the next argument
 */
void print_str(va_list list)
{
	char *s = va_arg(list, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);

}
/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
va_list list;
int i = 0, j = 0;
char *sep = "";

printS printT[] = {
	{ "i", print_int },
	{ "f", print_float },
	{ "c", print_char },
	{ "s", print_str },
	{NULL, NULL}
};


va_start(list, format);

while (format && format[i])
{
	j = 0;
	while (j < 4)
	{
		if (*printT[j].type == format[i])
		{
			printf("%s", sep);
			printT[j].printer(list);
			sep = ", ";
			break;
		}
		j++;
	}
	i++;
}

printf("\n");
va_end(list);
}
