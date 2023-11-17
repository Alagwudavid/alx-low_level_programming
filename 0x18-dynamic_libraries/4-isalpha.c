#include <stdio.h>
#include "main.h"

/**
* _islower - prints _isalpha
*
* Description - prints a function that checks for alphabetic character
*
* Return: 0 success
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

