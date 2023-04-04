#include "main.h"
#include <unistd.h>

/**
 * _strpbrk - functions that searches for any set of bytes
 * @s: string argument to be searched
 * @accept: second argument to be used for search
 *
 * Return: returns pointer to matching bytes otherwise return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) - *(accept + j) == 0)
				return (s + i);
			j++;
		}
		i++;
	}

	return (NULL);
}
