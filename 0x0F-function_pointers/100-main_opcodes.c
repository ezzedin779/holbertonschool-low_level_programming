#include <stdio.h>
#include <stdlib.h>
/**
*main - print the opcode of it's own main function
*@argc: length of the arguments
*@argv: array of arguments
*Return: integer
*/
int main(int argc, char *argv[])
{
int n_byte, i;
char *f;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
n_byte = atoi(argv[1]);
if (n_byte < 0)
{
printf("Error\n");
exit(2);
}
f = (char *)main;
for (i = 0; i < n_byte; i++)
{
printf("%.2hhx", f[i]);
if (i < n_byte - 1)
printf(" ");
}
printf("\n");
return (0);
}
