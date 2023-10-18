#include <limits.h>
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

	long int number;

	number = abs(c);
	if (number == INT_MIN)
	{
		number = 2147483648;
	}
	number = number % 10;
	_putchar('0' + number);
	return (number);


}
