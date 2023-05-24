#include <stdio.h>
#include "main.h"

/**
* main - prints function
*
* Description - prints _putchar twice
*
* Return: 0 success
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar ('\n');
}
