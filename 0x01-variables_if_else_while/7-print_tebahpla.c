#include <stdio.h>
/**
 * main - printing the alphabet backwards using putchar
 * Return: 0
 **/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
