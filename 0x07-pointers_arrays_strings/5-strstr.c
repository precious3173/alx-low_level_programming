#include "main.h"

/**
  *_strstr - Function
  *@haystack: first parameter
  *@needle:second parameter
  *Return: return char
  */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *a = haystack;
char *b = needle;

while (*a == *b && *b != '\0')
{
a++;
b++;
}
if (*b == '\0')
return (haystack);
}
return (0);
}
