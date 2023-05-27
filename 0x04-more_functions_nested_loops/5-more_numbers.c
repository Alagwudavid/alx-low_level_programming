#include "main.h"

/**
* more_numbers - Print 10 times the numbers since 0 up to 14
* Description - Write a function that prints 10 times the numbers,
*		from 0 to 14, followed by a new line.
* Return: 0 success
*/

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}

			_putchar((y % 10) + '0');
		}

		_putchar('\n');
	}
}
