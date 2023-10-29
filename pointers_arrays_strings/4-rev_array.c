#include "main.h"

/**
 * reverse_array - reverse une array.
 * @a: l'array.
 * @n: taille de l'array.
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
