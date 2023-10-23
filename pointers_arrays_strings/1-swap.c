#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - entry point
 *
 * Description: Prints diagonals
 *@adresse: size of the triangle
 * Return: void
 */

void swap_int(int *adresse1, int *adresse2)
{

	int temporaire;
	temporaire = *adresse1;
	*adresse1 = *adresse2;
	*adresse2 = temporaire;
}
