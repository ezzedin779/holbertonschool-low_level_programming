/**
*search_sqrt - what is your sqrt ?
*@a: try a else try a +1
*@b: b is n
*Return: int
*/
int search_sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	else
		return (search_sqrt(a + 1, b));
}
/**
*_sqrt_recursion - reat sqrt
*@n: searching n's sqrt
*Return: int
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (search_sqrt(1, n));
}
