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
	int single;
	for (single = 0; single < 10; single++)
	{
		putchar('0' + single);
		if (single != 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
