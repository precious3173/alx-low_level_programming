#include "main.h"

/**
  *_memset - Function
  *@s: First Parameter
  *@b: Second Parameter
  *@n: Third Parameter
  *Return: return character
  */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for(; n > 0; i++)
{
s[i] = b;
n--;
}
return(s);
}
