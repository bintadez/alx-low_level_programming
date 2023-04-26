#include "main.h"
/**
* print_alphabet_x10 - " prints 10 times the alphabet,
* in lowercase, followed by a new line"
*
* Return: nothing (success)
*/
void print_alphabet_x10(void)
{
	int i;
	int j = 97;

	for (i = 0; i < 9; i++)
	{
		while (j <= 122)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
