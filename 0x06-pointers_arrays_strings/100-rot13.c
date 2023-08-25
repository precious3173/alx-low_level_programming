#include "main.h"

/**
  *rot13 - Function
  *@s: Parameter
  *Return: char
  */

char *rot13(char *s)
{
int i;
int j;

char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char d2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstvuwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == d[j])
{
s[i] = d2[j];
break;
}
}
}
return (s);
}
