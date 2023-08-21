#include "main.h"

/**
 * swap_int - Swap int function
 * @a: first parameter
 * @b: second parameter
 * Return: return 0
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
