#include "main.h"
#include <stdio.h>

/**
  *print_diagsums - function
  *@a: first parameter
  *@size: second parameter
  *Return: return void
  */

void print_diagsums(int *a, int size)
{
int b, c, d;
b = 0;
c = 0;

for (d = 0; d < size; d++)
{
b = b + a[d * size + d];
}
for (d = size - 1; d >= 0; d--)
{
c += a[d * size + (size - d - 1)];
}
printf("%d, %d\n", b, c);
}
