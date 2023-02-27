#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - tell if a random number if positive or negative
 * Return: 0
 **/
int main(void)
{
	int n;

	int endn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	endn = n % 10;

	if (endn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, endn);
	}
	if (endn < 6 && endn != 0) 
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, endn);
	}
	if (endn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, endn);
	}
	return (0);
}
