#include "main.h"

/**
 * _isdigit - ckeck the given value a digit
 * @c: values to ckeck
 *
 * Return: 1 if digit else 0 (false)
 */
int _isdigit(int c)
{
	if (c >= '0' && c<= '9')
	{
		return (1);
	}
	return (0);
}

