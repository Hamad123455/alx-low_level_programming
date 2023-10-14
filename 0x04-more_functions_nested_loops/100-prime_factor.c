#include <stdio.h>

/**
 * main - print the largest prime factor of a number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	Number = 612852475143;
	int inc;

	while (inc++ < Number / 2)
	{
		if (Number % inc == 0)
		{
			Number /= 2;
			continue;
		}

		for (inc = 3; inc < Number / 2; inc += 2)
		{
			if (Number % inc == 0)
				Number /= inc;

		}
	}
	printf("%d\n", Number);
	return (0);
}
