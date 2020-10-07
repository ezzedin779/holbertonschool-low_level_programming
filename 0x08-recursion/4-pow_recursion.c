/**
*_pow_recursion - creating out power function
*@x: number to do power
*@y: how many times ?
*Return: int
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
