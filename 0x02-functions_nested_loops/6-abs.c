#include "main.h"
/**
 * _abs - compute the absolute value of an integer.
 * @n: the integer to be computed
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}

	return (n);
}
