#include <stdio.h>
/**
*main -function
*Description: fourth task
*Return: return 0
*/
int main(void)
{
char lc = 'a';
char uc = 'A';
while (lc <= 'z') 
{
putchar(lc);
lc++;	 
}
putchar('\n');
while (uc <= 'Z')
{
putchar(uc);
uc++;
}
return (0);
}

