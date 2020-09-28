/**
*swap_int - a will be b and b will be a
*@a: is the adress of the the first integer to swap
*@b: is the adress of the second integer to swap
*/
void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
