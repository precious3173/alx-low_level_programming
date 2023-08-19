#include "main.h"
#include <unistd.h>

/**
 * _putchar - check the code.
 *@c: The character
 *Return : return 0
 */
int main(char c)
{
	return (write(1, &c, 1));
}
