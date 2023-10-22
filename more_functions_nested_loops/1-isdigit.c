#include "main.h"

/**
* _isdigit - verifie si le chiffre est entre 0 et 9
* @c: chiffre a checker
* Return:  0 or 1
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
