#include "main.h"
/**
* _islower - Shows if n input is a
* lowercase character
*
* @c: The character in ASCII code
* Return: 1 for lowercase character and 1 for the rest
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
