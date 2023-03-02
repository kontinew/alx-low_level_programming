/**
 * _strncat - concatenates two string
 * @dest: the string to be concatenated with src
 * @src: the string to be concatenated with dest
 * @n: number of bytes from src
 * Return: dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
