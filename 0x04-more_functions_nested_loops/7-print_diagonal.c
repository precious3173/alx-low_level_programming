#include "main.h"

/**
 * print_diagonal - returns the largest of 3 numbers
 * @n: first integer
 * Return: void
 */
void print_diagonal(int n)
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
_putchar('\\');
}
_putchar('\n');
}
}
