#include <stdio.h>
/**
*main - Entry point 
*
* Return: Always returns 0 (Success)
*/
int main(void)
{
	int l;
	int u;

	for (l = 97 ; l <= 122 ; l++)
	{
		putchar(l);
	}
	for (u = 65 ; u <= 90 ;  u++)
	{
		putchar(u);
	}
		putchar('\n');

	return (0);
}
