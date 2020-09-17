#include <stdio.h>
/**
* main - void
* putchar - print all combinations of diff double-digit numbers
* Return: 0
*/
int main(void)
{
int a;
for (a = 0; a <= 99; ++a)
{
if ((a % 10) > (a / 10))
{
putchar ((a / 10) + '0');
putchar ((a % 10) + '0');
if (a != 89)
{
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
