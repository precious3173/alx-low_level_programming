#include <stdio.h>
/**
*main - function
*Description: 9th task
*Return: return 0
*/
int main(void)
{
int num = 0;
while (num <= 16)
{
if (num < 10)
{
putchar('0' + num);
}
else if (num >= 10 && num <= 16)
{
int last = num % 10;
int first = num / 10;
putchar('0' + first);
putchar('0' + last);
}
num++;
}
putchar('\n');
return (0);
}
