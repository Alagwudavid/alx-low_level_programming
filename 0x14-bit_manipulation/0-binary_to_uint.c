#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b){
	unsigned int len = 0, count = 0, sum = 0;
	
	if (b == NULL)
		return 0;

	len = _strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return 0;

		if (b[len] == 49)
			sum += 1 << count;

		count++;
	}

	return sum;
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
