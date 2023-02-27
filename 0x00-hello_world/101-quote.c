#include <stdio.h>
#include <unistd.h>
/**
 * main - Print a quote without using printf nor put
 * Return: 1
 **/
int main(void)
{
	write(1, "and that piece of art is", sizeof("and that piece of art is"));
	write(1,  " useful\" - Dora Korpar", sizeof(" useful\" - Dora Korpar"));
	write(1, ", 2015-10-19\n", sizeof(", 2015-10-19\n"));
	return (1);
}
