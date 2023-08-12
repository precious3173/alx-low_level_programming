#include <stdio.h>
/**
*main - function
*Description: project 5
*Return: return 0
*/
int main(void)
{
char lc = 'a';
while (lc <= 'z')
{
if (lc != 'q' && lc != 'e')
{
putchar(lc);
}
lc++;
}
putchar('\n');
return (0);
}
