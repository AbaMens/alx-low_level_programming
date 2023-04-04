#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string argument passed to be passed into the function
 * @accept: string argument to be checked against
 *
 * Return: returns length of the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;
	unsigned int m;

	i = 0;
	m = 0;
	k = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) - *(accept + j) == 0)
			{
				k = 1;
				m++;
			}
			j++;
		}

		if (m > 0 && k == 0)
			break;
		k = 0;
		i++;
	}

	return (m);
}
