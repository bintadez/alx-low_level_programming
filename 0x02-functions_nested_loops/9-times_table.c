#include "main.h"
/**
* times_table - prints the 9 times
* table, starting with 0
*
* Return: no returns
*/
void times_table(void)
{
	int n, mult, res;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			res = n * mult;
			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
