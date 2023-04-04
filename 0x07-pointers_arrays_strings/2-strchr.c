#include "main.h"
#include <unistd.h>

/**
 * _strchr - functions that locates the first occurrence of a
 * character in a string
 * @s: string pointer passed into fuction
 * @c: character to be searched for
 *
 * Return: returns a pointer to the first occurrence of c in the
 * string
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (1)
	{
		if (*(s + i) - c == 0)
			return (s + i);
		if (*(s + i) == '\0')
			break;
		i++;
	}

	return (NULL);
}
