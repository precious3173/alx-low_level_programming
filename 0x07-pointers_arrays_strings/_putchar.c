#include "main.h"
#include <unistd.h"

/**
  *_putchar - Functions
  *@c: The first parameter
  *Return: return 1
  */

int _putchar(char c)
{
return (write(1, &c, 1));
}
