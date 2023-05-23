#include <stdio.h>

/**
* main - prints all possible combinations of three-digit numbers
*
* Description - prints main
*
* Return: 0 success
*/

int main(void)
{
	int oneDigit;
	int twoDigit;
	int threeDigit;

	for (oneDigit = 0; oneDigit <= 7; oneDigit++)
	{
		for (twoDigit = oneDigit + 1; twoDigit <= 8; twoDigit++)
		{
			for (threeDigit = twoDigit + 1; threeDigit <= 9; threeDigit++)
			{
				putchar(oneDigit + '0');
				putchar(twoDigit + '0');
				putchar(threeDigit + '0');

			if (oneDigit != 7 || twoDigit != 8 || threeDigit != 9)
			{
				putchar (',');
				putchar (' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
