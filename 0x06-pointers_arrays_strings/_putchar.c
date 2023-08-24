#include "main.h"
#include <unistd.h>

/**
  *_putchar - Function
  *@c: The character to print
  *
  *Return: return 0
  */

int _putchar(char c)
{
return (write(1, &c, 1));
}
