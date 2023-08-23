#include "main.h"

/**
  *_strcat - Function
  *@dest: First parameter
  *@src: Second parameter
  *Return: return 0
  */

char *_strcat(char *dest, char *src)
{
char src[100];
int i = 0, j = 0;
int max = 80;
int count;

for (count = 0; count < max; count++)
{
if (dest[count] != '\0')
_putchar(dest[count]);
else
_putchar('\n');
}
}
