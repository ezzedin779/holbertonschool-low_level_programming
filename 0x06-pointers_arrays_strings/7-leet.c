/**
*leet - coding in 1337
*@a: string
*Return: char
*/
char *leet(char *a)
{
	int i = 0, j;
	char ch1[] = "aAeEoOtTlL", ch2[] = "4433007711";

	while (a[i] != '\0')
	{
		j = 0;
		while (j <= 10)
		{
			if (ch1[j] == a[i])
				a[i] = ch2[j];
			j++;
		}
		i++;
	}
	return (a);
}
