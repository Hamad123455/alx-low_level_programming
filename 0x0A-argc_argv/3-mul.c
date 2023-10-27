#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, j, n, len, f, number;

	i = 0;
	j = 0;
	n = 0;
	len = 0;
	f = 0;
	number = 0;

	while (s[len] != '0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')

			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			number = s[i] - '0';
			if (j % 2)
				number = -number;
			n = n * 10 + number;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - add to positive number
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, number, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		number = _atoi(argv[k]);
		if (number >= 0)
		{
			sum += number;
		}

	}

	printf("%d\n", sum);
	return (0);
}
