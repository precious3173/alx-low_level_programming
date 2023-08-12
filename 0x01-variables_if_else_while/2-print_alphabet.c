#include <stdio.h>
/**
*main - function
*Description: putchar task
*Return: returm 0
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
