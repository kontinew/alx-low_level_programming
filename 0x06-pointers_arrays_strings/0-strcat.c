/**
 * _strcat(char *dest, char *src) - concatenates two strings
 * @dest: the string to be amended
 * @src: the string to be appended to the dest
 * Return: dest
 **/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
