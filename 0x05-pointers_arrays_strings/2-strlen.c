/**
*_strlen - length of a string
*@s: string
*Return: length
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
