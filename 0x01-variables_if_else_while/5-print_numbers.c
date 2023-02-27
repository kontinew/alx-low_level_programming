#include <stdio.h>
/**
 * main - pritn all single digit numbers startign with 0
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
	putchar('\n');
	return (0);
}
