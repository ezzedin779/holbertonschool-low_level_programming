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
*_strdup - allocates a new memory for a string and copies in it a string
*@str: string to be coppied
*Return: a new string
*/
char *_strdup(char *str)
{
	int i;
	char *strcpd;

	if (str == NULL)
		return (NULL);
	strcpd = malloc(sizeof(char) * length(str) + 1);
	if (strcpd == NULL)
		return (NULL);
	for (i = 0; i <= length(str); i++)
		strcpd[i] = str[i];
	strcpd[i + 1] = '\0';
	return (strcpd);
}
