#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			c = j;
			if (c > 9)
			{
				_putchar('1');
				c = j % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
	}
}
