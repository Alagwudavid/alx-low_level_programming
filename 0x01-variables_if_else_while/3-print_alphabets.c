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
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	
	for (AZ = 'A'; AZ <= 'Z'; AZ++)
	{
		putchar(AZ);
	}

	putchar('\n');

	return (0);
}
