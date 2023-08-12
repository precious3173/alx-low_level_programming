#include <stdio.h>
/**
*main - function
*Description: 10th task
*Return: return 0
*/
int main(void)
{
int n = 0;
while (n < 10)
{
putchar('0' + n);
putchar(',');
putchar(' ');
n++;
}
putchar('\n');
return (0);
}
