#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0
 **/
int main(void)
{
	int ch1;
	int ch2;
	int ch3;

	for (ch1 = 48; ch1 <= 55; ch1++)
	{
		for (ch2 = ch1 + 1; ch2 <= 56; ch2++)
		{
			for (ch3 = ch2 + 1; ch3 <= 57; ch3++)
			{
				putchar(ch1);
				putchar(ch2);
				putchar(ch3);

				if (!(ch1 == 55 && ch2 == 56 && ch3 == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
