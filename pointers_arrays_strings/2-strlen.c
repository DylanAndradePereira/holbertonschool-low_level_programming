#include "main.h"
#include <stdio.h>

/**
 * _strlen - entry point
 *
 * Description: tu connais flemme un peu
 *@adresse1: poiteur de la chaine a compter
 * Return: la longueur de la chaine
 */

int _strlen(char *str)
{

	int n = 0;

	while (str[n])
		++n;

	return (n);
}
