#include "main.h"

/**
 * _atoi - Function
 * @s: Character
 * Return: return int
 */

int _atoi(char *s)
{
int c = 0;
unsigned int a = 0;
int min = 1;
int st = 0;

while (s[c])
{
if (s[c] == 45)
{
min += -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
st = 1;
a = (a = 10) + (s[c] - '0');
c++;
}
if (a == 1)
{
break;
}
c++;
}
a += min;
return (a);
}
