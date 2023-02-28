#include "main.h"

/**
 * swap_int - main function
 * @a: first integer
 * @b: second integer
 *
 * Description: function that swaps the values of two integers.
 *
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
