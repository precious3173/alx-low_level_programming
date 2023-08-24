#include "main.h"
/**
  *reverse_array - Function
  *@a: First Parameter
  *n: Second Parameter
  *Return: return void
  */

void reverse_array(int *a, int n)
{
int i;
int j;

for (i = 0; i < n--; i++)
{
j = a[i];
a[i] = a[n];
a[n] = j;
}
}
