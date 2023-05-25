#include <stdio.h>
#include "main.h"

/**
* jack_bauer - function void
*
* Description - prints every minute of the day of Jack Bauer,
*		starting from 00:00 to 23:59.
*
* Return: 0 success
*/
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
