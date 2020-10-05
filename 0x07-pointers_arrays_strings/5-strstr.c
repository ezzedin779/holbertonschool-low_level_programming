/**
*_strstr - find occurence of a substring in a string
*@haystack: string to search in
*@needle: string searched
*Return: pointer to the begining of the located substring or a null
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != 0; i++)
	{
		for (j = 0; (needle[j] != '\0') && (haystack[i] == needle[0]); j++)
		{
			if (haystack[i + j] == needle[j])
				continue;
			else
				break;
		}
		if (needle[j] != '\0')
			j = 0;
		else
			return (&haystack[i]);
	}
	return (0);
}
