#include "main.h"
#include <stdio.h>

/**
 * _strcat - Entry point
 *
 * @src: starting string
 * @dest: destination string
 * Description: a function that concatenates two strings
 * Return: none
 */
char *_strcat(char *dest, char *src)
{
        int len1, len2;

        for (len1 = 0; dest[len1] != 0; len1++)
        {
        }
        for (len2 = 0; src[len2] != 0; len2++)
        {
                dest[len1] = src[len2];
                len1++;
        }

