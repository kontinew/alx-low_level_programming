#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: the number to be checked
 * Return: 1 is greater than zero, 0 if equal to zero & -1 is less than zero
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}

	if (n == 0)
	{
		i = 0;
		_putchar('0');
	}

	if (n < 0)
	{
		i = -1;
		_putchar('-');
	}

	return (i);
}
