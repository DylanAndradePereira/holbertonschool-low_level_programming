#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - print le signe d'un chiffre
 * @c: char a verifier
 *
 * Return: true si vrai bref
 */
int print_last_digit(int c)
{

	int number;

	number = c % 10;
	_putchar(number);
	return (number);


}
