#include <stdio.h>
/**
*main - function
*Description 11th task
*Return: return 0
*/
int main(void)
{
int n = 0;
for (n; n <= 9; n++)
{
for (int j = n + 1; j <= 9; j++)
{
putchar(n + '0');
putchar(j + '0');
if (n < 8 || j < 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
