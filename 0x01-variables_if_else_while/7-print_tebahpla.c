#include <stdio.h>
/**
* main - void
* putchar - print the reverse alphabetics
* Return: 0
*/
int main(void)
{
char a;
for (a = 'z'; a >= 'a'; --a)
{
putchar (a);
}
putchar ('\n');
return (0);
}
