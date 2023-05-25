#include <stdio.h>
#include "main.h"

/**
* print_to_98 - function prototype for void print_to_98
*
* Description - prints all natural numbers from n to 98,
*		followed by a new line
*
* Return: 0 success
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
