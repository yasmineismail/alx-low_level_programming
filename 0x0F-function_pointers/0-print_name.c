#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name to print
 * @f: a function pointer that prints a name in a specific format
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
