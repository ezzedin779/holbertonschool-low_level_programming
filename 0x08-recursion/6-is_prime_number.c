/**
*verify_prime - are u prime ?
*@a: a is n
*@b: b is all number from 2 to n
*Return: int
*/
int verify_prime(int a, int b)
{
	if ((a % b == 0) && (a > b))
		return (0);
	else if (b > a)
		return (1);
	else
		return (verify_prime(a, b + 1));
}
/**
*is_prime_number - getting prime
*@n: are u prime n ?
*Return: int
*/
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else if (n < 0)
		return (0);
	else
		return (verify_prime(n, 2));
}
