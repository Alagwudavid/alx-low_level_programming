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
	char letter = 'a';
	
	while (letter <= 'z') {
    		_putchar(letter);
		letter++;
	}
	_putchar ('\n');
	return (0);
}
