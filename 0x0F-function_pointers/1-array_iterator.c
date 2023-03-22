#include "function_pointers.h"

/**
 * array_iterator - Parameter on each element
 * @array: Array of element to be passed to function
 * @size: Size of the array
 * @action: Pointer to the function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
