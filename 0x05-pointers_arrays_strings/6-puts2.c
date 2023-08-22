#include "main.h"

/**
 * puts2 - Function 
 * @str: Character
 * Return: return 0
 */

void puts2(char *str)
{
int i = 0;
int j = 0;
int k;

while (*str != '\0')
{
str++;
i++;
}
j = i - 1;
for (k = 0; k <= j; k++)
{
if (k % 2 == 0)
{
_putchar(str[0]);
}
}
_putchar('\n');
}
