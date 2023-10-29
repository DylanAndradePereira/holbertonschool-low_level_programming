/**
 * _strcmp - faut que j'remplisse.
 * @s1: param1.
 * @s2: param2.
 *
 * Return: param1 - param2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
