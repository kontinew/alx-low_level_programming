#include <stdio.h>
/**
 * main - print single digit numbers with , separating it
 * Return: 0
 **/
int main(void)
{
	int ch = 0;

	while (ch <= 9)
	{
		putchar('0' + ch);
		if (ch != 9)
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
