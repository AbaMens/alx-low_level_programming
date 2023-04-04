#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square
 * matrix of integers
 * @a: First argument of matrix
 * @size: size of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int m, n;

	i = 0;
	m = 0;
	n = 0;
	while (i < size)
	{
		m += *(a + ((size * i) + i));
		i++;
	}

	i -= 1;
	j = 0;
	while (j < size)
	{
		n += *(a + ((size * i) + j));
		j++;
		i--;
	}

	printf("%d, %d\n", m, n);
}
