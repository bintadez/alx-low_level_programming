#include <stdio.h>
/**
 * main -Entry point
 * prints numbers in  base 16
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;
	int b;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
