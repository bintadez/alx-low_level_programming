#include <stdio.h>
/**
 * main - Entry point
 *Description:prints single digit numbers in base 10
 *Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
