#include <stdio.h>
/**
 * main - print lowercase and uppercase alphabet using putchar
 * Return: 0
 **/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		printf("%c", ch);
		ch++;
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		printf("%c", ch);
		ch++;
	}
	printf("\n");
	return (0);
}
