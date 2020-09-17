#include <stdio.h>
/**
* main - void
* putchar - print all combinations of diff triple-digit numbers
* Return: 0
*/
int main(void)
{
int a;
for (a = 0; a <= 999; ++a)
{
if (((a / 100) < ((a % 100) / 10)) && (((a % 100) / 10) < (a % 10)))
{
putchar ((a / 100) + '0');
putchar (((a % 100) / 10) + '0');
putchar ((a % 10) + '0');
if (a != 789)
{
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
