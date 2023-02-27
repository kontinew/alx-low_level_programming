#include <stdio.h>
/**
 * main - all numbers of base 16 in lowercase
 * Return: 0
 **/
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
