#include "main.h"

/**
  *print_number - Function
  *@n: Parameter
  *Return: 0
  */

void print_number(int n)
{
unsigned int na;

na = n;

if (n < 0)
{
_putchar('-');
na = -n;
}
if (na / 10 != 0)
{
print_number(na / 10);
}
_putchar((na % 10) + '0');
}
