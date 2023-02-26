#include <unistd.h>
#include <syscall.h>
/**
 * main - Print a quote without using printf nor put
 * Returns: 1
 **/
int main(void)
{
	const char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	syscall(SYS_write, 1, quote, sizeof(quote));
	return (1);
}
