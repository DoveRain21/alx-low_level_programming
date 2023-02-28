#include "main.h"
#include <stdio.h>

/**
 * swap_int - main function
 * @a: first integer
 * @b: second integer
 * Description: function that swaps the values of two integers.
 *
 * Return: none
 */
void swap_int(int *a, int *b)

{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
