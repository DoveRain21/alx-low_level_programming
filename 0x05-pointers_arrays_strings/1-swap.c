#include "main.h"
#include <stdio.h>

/**
 * swap_int - main function
 * @a: first integer
 * @b: second integer
 *
 * Description: function that swaps the values of two integers.
 *
 * Return: 0
 */
void swap_int(int *a, int *b);
{
	int a;
	int b;
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
