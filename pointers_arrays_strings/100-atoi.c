#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _atoi - entry point
 * Description: tu connais flemme un peu
 * @string: poiteurde la chaine a compteri
 * Return: mixed value llolololol
 */

int _atoi(char *str)
{
	unsigned int i;

	unsigned result = 0;

	int symbole;

	for (i = 0;i < strlen(str);i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
		
			if ((symbole != ' ' && str[i - 1] == '-') || (symbole != ' ' && str[i -1] == ' '))
        		{
                		symbole = '-';
        		}
		
			result = result*10 + str[i] - '0';
		}

	}

	return (result);
}
