#include "main.h"
#include <stdio.h>

/**
 * main - Prints a Fizz Buzz program
 * Description - The “Fizz-Buzz test” is an interview question designed to
 *		help filter out the 99.5% of programming job candidates who
 *		can’t seem to program their way out of a wet paper bag.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}

		if (x != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
