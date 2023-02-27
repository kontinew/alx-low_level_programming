#include <stdio.h>
/**
 * main - print single digit from 0 using putchar and wihtout char
 * Return: 0
 **/
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
