#include <stdio.h>
/**
* main - void
* putchar - print all combinations of double-digit numbers
* Return: 0
*/
int main(void)
{
int a;
for (a = 0; a <= 99; ++a)
{
putchar ((a / 10) + '0');
putchar ((a % 10) + '0');
if (a != 99)
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
