#include <stdio.h>
#include <unistd.h>
/**
 * main - Print a quote without using printf nor put
 * Return: 1
 **/
int main(void)
{
	char *_quote;

	*_quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, *_quote, sizeof(*_quote));
	return (1);
}
