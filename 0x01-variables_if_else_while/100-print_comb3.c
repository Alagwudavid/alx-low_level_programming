#include <stdio.h>

/**
* main - prints all possible combinations of single-digit numbers
*
* Description - prints main
*
* Return: 0 success
*/

int main(void)
{
	int oneDigit;
	int twoDigit;

	for (oneDigit = 0; oneDigit < 9; oneDigit++)
	{
		for (twoDigit = oneDigit + 1; twoDigit < 10; twoDigit++)
		{
			putchar(oneDigit + '0');
			putchar(twoDigit + '0');

		if (oneDigit != 8 || twoDigit != 9)
		{
			putchar (',');
			putchar (' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
