#include <stdio.h>
/**
 * main - entry point
 * prints the combination of all 3 digits numbers
 * Return: Always 0 success
*/
int main(void)
{
	int i;
	int j;
	int n;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (n = i + 2; n <= 57; n++)
			{
				if (i >= j && j >= n)
                                {
                                        continue;
                                }
                                putchar(i);
                                putchar(j);
                                putchar(n);
                                if (i == 55 && j == 56 && h == 57)
                                {
                                        continue;
                                }
                                putchar(',');
                                putchar(' ');

                        }

			
                }
        }
        putchar('\n');
        return (0);
}
