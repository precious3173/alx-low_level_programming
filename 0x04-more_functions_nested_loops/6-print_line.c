#include "main.h"

/**
 * print_line - returns the largest of 3 numbers
 * @n: first integer
 * Return: largest number
 */

void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
_putchar(95);
}
_putchar('\n');
}
}
