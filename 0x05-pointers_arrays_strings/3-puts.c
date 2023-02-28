#include "main.h"
#include <stdio.h>

/**
 *_puts - main function
 *@s: Arguments
 *
 *Description: a function that prints a string
 *followed by a new line, to stdout
 *
 * Return: none
 */

void _puts(char *str)

{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
