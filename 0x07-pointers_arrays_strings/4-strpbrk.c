#include "main.h"
/**
  *_strpbrk - Function
  *@s: first parameter
  *@accept: second parameter
  *Return: return char
  */

char *_strpbrk(char *s, char *accept)
{
int a;
while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
return (s);
}
s++;
}
return ('\0');
}
