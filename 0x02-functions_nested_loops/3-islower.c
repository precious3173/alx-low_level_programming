#include "main.h"
#include <stdio.h>
/**
 *_islower - third task
 *lowercase character: L
 *0
 *
 * @c: The char key
 *Return: 1
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
