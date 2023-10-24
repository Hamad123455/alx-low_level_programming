#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int sum, sum1;
	int i, j;

	sum = 0;
	sum1 = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		sum += *(a + i * size + j);
		sum1 += *(a + i * size + (size - 1 - j));
		j++;
		i++;
	}
	printf("%d, %d\n", sum, sum1);
}
