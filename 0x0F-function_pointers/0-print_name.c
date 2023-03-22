#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: String of name to be printed
 * @f: Pointer to function that prints a name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
