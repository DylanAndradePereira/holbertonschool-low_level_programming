#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - entry point
 * Description: tu connais flemme un peu
 * @dest: poiteurde la chaine a compteri
 * @src: strafoulah
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	unsigned long int i;


		for (i = 0; i < strlen(src); i++)
		{
			dest[i] = src[i];

		}

		if (strlen(src) < strlen(dest))
			dest[1] = '\0';


	return (dest);
}
