#include <stdio.h>
/**
* main - void
* putchar - print all combinations of single-digit numbers
* Return: 0
*/
int main(void)
{
int a;
for (a = '1'; a <= '9'; ++a)
{
putchar (a);
if (a != '9')
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
