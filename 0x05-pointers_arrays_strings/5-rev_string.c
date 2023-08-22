#include "main.h"

/**
 * rev_string - Function
 * @s: Character
 * Return: Void
 */

void rev_string(char *s)
{
char i = s[0];
int counter = 0;
int j;

while (s[counter] != '\0')
{
counter++;
}
for (j = 0; j < counter; j++)
counter--;
i = s[j];
s[j] = s[counter];
s[counter] = i;
}
}
