#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Prints the alphabet
*
* Description - prints "prints the alphabet in q&e"
*
* Return: 0 success
*/

int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
	if (az != 'q' && az != 'e')
	{
		putchar(az);
	}
	}

	putchar('\n');

	return (0);
}
