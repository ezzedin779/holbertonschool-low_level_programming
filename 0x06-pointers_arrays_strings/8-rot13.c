/**
*rot13 - coding in ROT13
*@a: string
*Return: char
*/
char *rot13(char *a)
{
	int i = 0, j;
	char ch1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ch2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (a[i] != '\0')
	{
		j = 0;
		while (ch1[j] != '\0')
		{
			if (ch1[j] == a[i])
			{
				a[i] = ch2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (a);
}
