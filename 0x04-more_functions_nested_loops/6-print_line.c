#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

void print_line(int n)
{
int i = -4;

for (; i <= n; i++)
{
if (i == 0 || i == -4)
{
_putchar('\n');
}
else
{
_putchar('_');
}
}
_putchar('\n');
}
