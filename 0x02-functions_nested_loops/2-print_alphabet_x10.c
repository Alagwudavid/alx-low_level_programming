#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - prints print_alphabet_x10, followed by a new line 10x.
*
* Description - prints a-z 10x with new line
*
* Return: 0 success
*/

void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar ('\n');
	}
}
