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
		if (ch != 'q' || ch != 'e')
		{
			printf("%c", ch);
		}
		ch++;
	}
	printf("\n");
	return (0);
}
