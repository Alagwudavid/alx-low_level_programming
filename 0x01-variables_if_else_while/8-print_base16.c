#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Prints main
*
* Description - prints "single digit numbers of base 16 starting from 0"
*
* Return: 0 success
*/

int main(void)
{
	int number;

	for (number = 0; number <= 16; number++)
	{
		putchar('0' + number);
	}
	putchar('\n');

	return (0);
}
