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
	int dotDigit;

	for (oneDigit = 0; oneDigit <= 9; oneDigit++)
	{
		for (twoDigit = oneDigit + 1; twoDigit <= 9; twoDigit++)
		{
			for (threeDigit = twoDigit + 1; threeDigit <= 9; threeDigit++)
			{
				if (threeDigit == oneDigit)
				{
					dotDigit = twoDigit + 1;
				}
				else
				{
					dotDigit = 0;
				}
				for (; dotDigit <= 9; dotDigit++)
				{
				putchar(oneDigit + '0');
				putchar(twoDigit + '0');
				putchar(' ');
				putchar(threeDigit + '0');
				putchar(oneDigit + '0');

				if (oneDigit != 9 || twoDigit != 8 || threeDigit != 9 || oneDigit != 9)
				{
					putchar (',');
					putchar (' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
