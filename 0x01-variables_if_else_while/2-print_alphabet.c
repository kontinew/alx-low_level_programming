#include <stdio.h>
/**
 * main - print lowercase alphabet using putchar
 * Return: 0
 **/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
