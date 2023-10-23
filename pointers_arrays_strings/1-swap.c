#include "main.h"
#include <stdio.h>

/**
 * swap_int - entry point
 *
 * Description: Prints diagonals
 *@adresse1: size of the triangle
 *@adresse2: dhufdhnu
 * Return: void
 */

void swap_int(int *adresse1, int *adresse2)
{

	int temporaire;

	temporaire = *adresse1;
	*adresse1 = *adresse2;
	*adresse2 = temporaire;
}
