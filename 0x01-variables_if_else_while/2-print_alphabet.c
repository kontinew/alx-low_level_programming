#include <stdio.h>
/**
 * main - print lowercase alphabet using putchar
 * Return: 0
 **/
int main(void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		printf("%c", ch);
		ch++;
	}
	printf("\n");
	return (0);
}
