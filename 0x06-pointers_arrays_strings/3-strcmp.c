#include "main.h"

/**
  *_strcmp - Function
  *@s1: First parameter
  *@s2: Second Parameter
  *Return: return int
  */

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
