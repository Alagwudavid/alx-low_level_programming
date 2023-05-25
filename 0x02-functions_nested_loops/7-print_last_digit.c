#include <stdio.h>
#include "main.h"

/**
* print_last_digit - prints print_last_digit
*
* Description - prints a function that prints the last digit of a number.
*
* Return: 0 success
*/

int print_last_digit(int)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
