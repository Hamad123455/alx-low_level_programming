#include <stdio.h>

/**
 * main - Entry poinnt
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;

	for (n = 0 ; n < 9 ; n++)
	{
		i = n + 1;
		do {
			putchar('0' + n);
			putchar('0' + i);
			if (n > 8)
			{
				putchar('.');
				putchar(' ');
			}
			i++;
		} while (i < 10);
	}
	putchar('\n');
	return (0);
}
