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

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
