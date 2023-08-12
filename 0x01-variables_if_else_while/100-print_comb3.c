#include <stdio.h>
/**
*main - function
*Description 11th task
*Return: return 0
*/
int main(void)
{
int n = 1;
while (n <= 10)
{
int first = n / 10;
int last = n % 10;
putchar('0' + first);
putchar('0' + last);
if (n < 10)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
