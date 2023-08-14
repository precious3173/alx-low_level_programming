#include <stdio.h>
/**
*main - function
*Description 11th task
*Return: return 0
*/
int main(void)
{
int n = 0;
int j = n + 1;
while (n <= 9)
{
while (j <= 9)
{
putchar(n + '0');
putchar(j + '0');
if (n < 8 || j < 9)
{
putchar(',');
putchar(' ');
}
j++;
}
n++;
}
putchar('\n');
return (0);
}
