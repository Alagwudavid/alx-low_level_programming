#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Prints the alphabet in lowercase
*
* Description - prints "prints the alphabet in lowercase"
*
* Return: 0 success
*/

int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
	{
		putchar(za);
	}

	putchar('\n');

	return (0);
}
