/**
*_strncpy - copies n byte from a string to another one
*@dest: Destination
*@src: source
*@n: number of bytes
*Return: char (source in the destination)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i <= n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (j = i; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
