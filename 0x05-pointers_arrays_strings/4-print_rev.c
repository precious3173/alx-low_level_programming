#include "main.h"

/**
 * print_rev - Function 
 * @s: The parameter
 * Return: return 0
 */

void print_rev(char *s)
{
	
int i, len, temp;
len = _strlen(s);
i = 0;
	while (i < len/2)
{
temp = s[i];
s[i] = s[len -i- 1];
s[len -i-1] = temp;
}
	
}
