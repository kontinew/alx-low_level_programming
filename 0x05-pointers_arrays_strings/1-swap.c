/**
 * swap_int - swaps 2 integers around
 * @a - first integer to become b
 * @b - second integer to become a
 **/
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
