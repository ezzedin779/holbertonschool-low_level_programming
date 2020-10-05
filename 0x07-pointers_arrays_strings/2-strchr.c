/**
*_strchr - search c in s
*@s: string searched in
*@c: character searched
*Return: pointer to the place of c in s or null
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
