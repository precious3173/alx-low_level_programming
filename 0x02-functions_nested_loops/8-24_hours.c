#include "main.h"
/**
 * jack_bauer - task 6
 *Return: no value
 */
void jack_bauer(void)
{
	int i, j, k , l;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				
				for (l = 0; l <= 9; l++)
				{
					if (i >= 2 && j >= 4)
						break;
				_putchar(i + 48);
				_putchar(j + 48);
				_putchar(58);
				_putchar(k + 48);
				_putchar(l + 48);
				_putchar('\n');
				}
			}
		   }
	}

}
