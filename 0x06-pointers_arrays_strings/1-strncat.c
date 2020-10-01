/**
*_strncat - concatenates two strings with n bytes
*@dest: Destination
*@src: source
*@n: number of bytes
*Return: char (source in the end of destination)
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (j < n)
	{
		for (k = 0; k < j; k++)
		{
			dest[i] = src[k];
			i++;
		}
	}
	else
	{
		for (k = 0; k < n; k++)
		{
			dest[i] = src[k];
			i++;
		}
	}
	return (dest);
}
