/**
*_strspn - length of a prefix in substring
*@s: searched in s
*@accept: elements to search
*Return: integer
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len += 1;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (len);
}
