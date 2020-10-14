
#include <stdlib.h>
/**
*length - calculates the length of a string
*@str: string to calculate it's length
*Return: length of str
*/
unsigned int length(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
/**
*string_nconcat - concating s1 + n byte from s2 to a new string
*@s1: string 1
*@s2: string 2
*@n: number of bytes
*Return: pointer upon success else return null
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ch;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > length(s2))
		n = length(s2);
	ch = malloc(sizeof(char) * (length(s1) + n + 1));
	if (ch == NULL)
		return (NULL);
	for (i = 0, j = 0; s1[j] != '\0'; i++, j++)
		ch[i] = s1[j];
	for (j = 0; j != n; i++, j++)
		ch[i] = s2[j];
	ch[i] = '\0';
	return (ch);
}
