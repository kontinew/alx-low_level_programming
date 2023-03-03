/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 **/
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s[i] != s[j])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}
