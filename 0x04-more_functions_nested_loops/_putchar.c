#include "main.h"
#include <unistd.h>
#
/**
 * _putchar - check the code.
 *@c: The character
 *Description: Putchar to return int
 *Return: return 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
