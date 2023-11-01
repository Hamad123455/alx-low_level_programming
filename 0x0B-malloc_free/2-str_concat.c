#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates to strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string
 * which memory was allocated for
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, i, j;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j <= len2; j++)
	{
		p[i] = s2[j];
		i++;
	}
	return (p);
}


