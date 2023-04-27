#include <stdio.h>
void startup_print(void) __attribute__ ((constructor));

/**
 * startup_print - prints a startup message.
 * Return: void
 */
void startup_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
