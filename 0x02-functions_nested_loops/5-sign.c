#include "main.h"
/**
* print_sign - function that prints the sign of a number
*
* @n: the character to be checked
* Return: 1 if the number is greater than 0
* 0 if the number is zero
* -1 if the number is less than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
