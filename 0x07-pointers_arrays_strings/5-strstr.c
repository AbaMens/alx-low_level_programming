#include "main.h"
#include <unistd.h>

/**
 * _strstr - function to locate a substring
 * @haystack: string argument to be searched
 * @needle: string argument to be used for searching
 *
 * Return: returns a pointer to the beginning of the located
 * string or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;
	unsigned int m;

	i = 0;
	m = 0;

	if (*(needle) == '\0')
		return (haystack);
	while (*(haystack + i) != '\0')
	{
		j = 0;
		if (*(needle + j) - *(haystack + i) == 0)
		{
			k = i;
			m = i;
			while (1)
			{
				if (*(needle + j) == '\0')
					return (haystack + m);
				if (*(needle + j) - *(haystack + k) != 0)
					break;
				k++;
				j++;
			}
		}
		i++;
	}

	return (NULL);
}
