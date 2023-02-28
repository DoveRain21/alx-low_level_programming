#include "main.h"
#include <stdio.h>
/**
 * _strlen - main function
 * @s: Pointer of a char address
 *
 * Description: a function that returns the length of a string
 *
 * Return: none
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
