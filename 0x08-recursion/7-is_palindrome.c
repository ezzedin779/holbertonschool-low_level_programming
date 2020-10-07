/**
*_strlen_recursion - length of s
*@s: how long s
*@i: index
*Return: int
*/
int _strlen_recursion(char *s, int i)
{
	if (s[i] != '\0')
		return (_strlen_recursion(s, i + 1));
	return (i - 1);
}
/**
*checker - checking if palindrome
*@s: string to check
*@i: index
*@len: length of s
*Return: int
*/
int checker(char *s, int i, int len)
{
	if (s[i] == s[len] && i != len)
		return (checker(s, i + 1, len - 1));
	if (s[i] == s[len] || i >= len)
		return (1);
	if (s[i] != s[len])
		return (0);
	return (1);
}
/**
*is_palindrome - are you palindrome ?
*@s: string
*Return: int
*/
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s, 0);

	return (checker(s, 0, len));
}
