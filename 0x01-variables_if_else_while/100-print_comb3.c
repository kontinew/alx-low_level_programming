#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0
 **/
int main(void)
{
	int ch1;
	int ch2;

	for (ch1 = 48; ch1 < 57; ch1++)
	{
		for (ch2 = 49; ch2 <= 57; ch2++)
		{
			putchar(ch1);
			putchar(ch2);

			if (!(ch1 == 56 && ch2 == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}

	}

	putchar('\n');
	return (0);
}
