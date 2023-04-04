#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: string to be filled
 * @b: bytes to be used for filling the s
 * @n: number of memory/s to be filled
 *
 * Return: returns a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
