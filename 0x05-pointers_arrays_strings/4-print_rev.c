#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string to be reverse
 **/
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (len >= 0)
	{
		_putchar(s[len-1]);
		len--;
	}
	_putchar('\n');
}
