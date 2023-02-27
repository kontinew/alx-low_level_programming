#include <stdio.h>
/**
 * main - print lowercase alphabet excluding q & e and suign putchar
 * Return: 0
 **/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if(ch != 'q' || ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar("\n");
	return (0);
}
