#include <stdio.h>
#include "main.h"
/**
*print_alphabet_x10.c
*/
void print_alphabet_x10(void)
{
int i = 0;
char j = 'a';
while (i <= 9)
{
while (j < 'z')
{
_putchar(j);
_putchar('\n');
j++;
}
i++;
}
}
