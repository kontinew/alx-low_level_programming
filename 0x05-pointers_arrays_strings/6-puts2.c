#include "main.h"
/**
 * puts2 - print every other character
 * @str - the string to print
 **/
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i%2)
		{

		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
