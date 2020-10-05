/**
*_memcpy - copy n bytes from src to dest
*@dest: destination of the src
*@src: source to copied
*@n: number of bytes to copy
*Return: the destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
