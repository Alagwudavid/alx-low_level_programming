#include <stdio.h>
#include "main.h"

/**
* _islower - prints and checks for lowercase character
*
* Description - prints a function that checks for lowercase character
*
* Return: 0 success
*/

int _isalpha(int c)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
