#include "main.h"

/**
 *_isupper - checks if a character c is an uppercase
 *@c: character to check
 * Return: 1 if c is an uppercase ,0 otherwise
 */

int _isupper(int c)
{
	if (c <= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
