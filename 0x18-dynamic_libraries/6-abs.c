#include <stdio.h>
#include "main.h"

/**
* _abs - prints _abs
*
* Description - prints a function that computes the absolute value of an integer
*
* Return: 0 success
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
