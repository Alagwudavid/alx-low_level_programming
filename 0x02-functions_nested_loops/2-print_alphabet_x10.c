#include <stdio.h>
#include "main.h"

/**
* print_alphabet - prints the az in lowercase, followed by a new line 10x.
*
* Description - prints _putchar twice
*
* Return: 0 success
*/

void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar ('\n');
	}
}
