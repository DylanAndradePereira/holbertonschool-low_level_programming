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

	number = abs(c);
	number = number % 10;
	_putchar('0' + number);
	return (number);


}
