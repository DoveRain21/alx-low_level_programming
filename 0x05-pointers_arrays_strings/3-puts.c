#include "main.h"
#include <string.h>

/**
 * _puts - Entry point
 * @str: Pointer to char
 *
 * Description: Prints a string and new line to stdout
 *
 * Return: none
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
