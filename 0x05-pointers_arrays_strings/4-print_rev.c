#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string to be reverse
 **/
void print_rev(char *s)
{
	int len = _strlen(s);

	int n;

	for (n = len; n >= 0; n++)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
