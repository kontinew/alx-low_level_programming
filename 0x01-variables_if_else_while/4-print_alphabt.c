#include <stdio.h>
/**
 * main - print lowercase alphabet excluding q & e and suign putchar
 * Return: 0
 **/
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
