#include "main.h"
/**
 * jack_bauer - task 6
 *Return: no value
 */
void jack_bauer(void)
{
	for (int i = 0; i <= 2; i++)
	{
		_putchar(i);
		for (int j = 0; j <= 3; j++)
		{
			_putchar(j);
			_putchar(':');
			for (int k = 0; k <= 5; k++)
			{
				_putchar(k);
				for (int l = 0; l <= 9; l++)
				{
					_putchar(l);
					_putchar('\n');
				}
			}
		   }
	}

}
