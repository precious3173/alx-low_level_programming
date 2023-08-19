#include "main.h"

/**
 * print_number - prints an integer
 * @n: first
 * Return: none
 */
void print_number(int n)
{
unsigned int n2;
if ( n < 0)
{
n2 = -n;
_putchar('_');
}
else
{
n2 = n;
}
if (n2 / 10)
{
print_number(n2/10);
}
_putchar((n2 % 10) + '0');
}
