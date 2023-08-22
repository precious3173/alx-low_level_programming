#include "main.h"

/**
 * _puts - The function
 * @str: The character
 * Return: void
 */

void _puts(char *str)
{
while (*str != "\0")
{
_putchar(*str++);
}
_putchar('\n');
}
