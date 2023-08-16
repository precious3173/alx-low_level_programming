#include <stdio.h>
#include "main.h"
/**
*print_alphabet_x10.c
*/
void print_alphabet_x10(void)
{
int i = 0;
char j = 'a';
for (i; i <= 9, i++)
{
for (j; j < 'z', j++)
{
_putchar(j);
_putchar('\n');
}
}
}
