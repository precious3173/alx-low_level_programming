#include <stdio.h>
/**
*main - function
*Description: task 8
*Return: return 0
*/
int main(void)
{
int reverse = 9;
while (reverse > 0)
{
putchar('0' + reverse);
reverse--;
}
putchar('\n');
return (0);
}
