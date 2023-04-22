#include <stdio.h>
/**
*  main - prints the alphabet in lowercase then uppercase
*
* Returns: always returns 0
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
