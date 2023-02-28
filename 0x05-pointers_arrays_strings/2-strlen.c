/**
 * _strlen - returns the length of a string
 * @s: the string to find the length of
 *
 * Return: the length of the string
 **/
int _strlen(char *s)
{
	int len = 0;

	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		len++;
	}
	return (len);
}
