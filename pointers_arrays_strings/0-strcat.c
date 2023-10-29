#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_cat - concatenate strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL si ca échoue
 */
char *_strcat(char *dest, char *src)
{
	
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
