/**
 * _strncpy - copies a string
 * @dest: destination string
 * src: source string
 * n: amount of bytes
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j <= n)
	{
		dest[i] = src[j];
		j++;
	}
	
	return (dest);
}
