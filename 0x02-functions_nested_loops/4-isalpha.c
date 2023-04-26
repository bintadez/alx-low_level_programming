#include "main.h"
/**
* _isalpha - checks for alphabetic character
*
* @c: Character ASCII code
* Return: 1 for alphabetic and 0 for others
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
