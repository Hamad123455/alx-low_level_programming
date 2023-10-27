#include <stdio.h>
#include "main.h"

/**
 * main - prints the result of the multiplication
 * _atoi - convert a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
