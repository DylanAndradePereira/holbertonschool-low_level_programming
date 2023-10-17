#include "main.h"
/**
 * print_alphabet - writes the character c to stdout
 * @c: The character to print
 *
 * Return: alphabet
 */
void  print_alphabet(void)
{
	int i;

	for (i = 97 ; i < 123 ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
