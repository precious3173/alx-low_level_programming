#include "main.h"

/**
  *_memcpy - Function
  *@dest: first parameter
  *@src: second parameter
  *@n: third parameter
  *Return: return char
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int i = n;

for (; a < i; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
