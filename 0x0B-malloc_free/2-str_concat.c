#include <stdlib.h>
/**
*length - calculates the length of a string
*@str: string to calculate it's length
*Return: length of str
*/
int length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
/**
*str_concat - concating the s1 folowed by s2 in new string
*@s1: first string
*@s2: second string
*Return: string concated
*/
char *str_concat(char *s1, char *s2)
{
	int i, j = 0;
	char *ch;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ch = malloc(sizeof(char) * (length(s1) + length(s2) + 1));
	if (ch == NULL)
		return (NULL);
	for (i = 0; i <= length(s1); i++)
		ch[i] = s1[i];
	for (; i <= (length(s1) + length(s2)); i++)
	{
		ch[i] = s2[j];
		j++;
	}
	ch[i + 1] = '\0';
	return (ch);
}
