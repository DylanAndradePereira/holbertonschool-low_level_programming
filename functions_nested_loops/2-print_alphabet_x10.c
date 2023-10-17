#include "main.h"


/**
 * print_alphabet_X10 - affice l'alphabet
 *
 * Return: l'alphabet dix fois
 */
void print_alphabet_x10()
{
	int i;
	int j;
	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 97 ; i < 123 ; i++)
        	{
			_putchar(i);
        	}
	}
	
}
