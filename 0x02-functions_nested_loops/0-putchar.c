#include <stdio.h>
#include <main.h>
/**
 * main - print _putchar
 * Return: 0
 **/
int main(void)
{
	char str[] = "_putchar";

	int n;

	for (n = 0; n < sizeof(str); n++)
	{
		putchar(str[n]);
	}
	putchar('\n');
	return (0);
}
