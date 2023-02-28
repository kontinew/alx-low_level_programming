#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: a string to be reversed
 **/
void rev_string(char *s)
{
	int len, temp, n, i;

	len = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
