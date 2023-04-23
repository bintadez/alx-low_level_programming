#include <stdio.h>
/**
 * main - Entry point
 * description : prints all digit in base 10 using putchar function
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
