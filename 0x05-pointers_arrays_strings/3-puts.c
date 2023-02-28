#include "main.h"
/**
 * _puts - prints a string
 * @str: the string variable
 **/
void _puts(char *str)
{
	char ch[] = str;

	int len = _strlen(str);

	int count;

	while (count >= len)
	{
		_putchar(ch[count];
		count++;
	}
	_putchar('\n');
}
