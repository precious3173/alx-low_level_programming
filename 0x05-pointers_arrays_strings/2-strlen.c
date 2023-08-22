#include "main.h"

/**
 * _strlen - function name
 * @s: a character
 * Return: return integer
 */

int _strlen(char *s)
{
int i = 0;

while (*s != '\0')
{
i++;
s++;
}
return (i);
}
