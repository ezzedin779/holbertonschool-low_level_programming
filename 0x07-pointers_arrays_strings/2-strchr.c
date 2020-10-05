/**
*_strchr - search c in s
*@s: string searched in
*@c: character searched
*Return: pointer to the place of c in s or null
*/
char *_strchr(char *s, char c)
{
	int i;

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		*s++;
	}
	return (0);
}
