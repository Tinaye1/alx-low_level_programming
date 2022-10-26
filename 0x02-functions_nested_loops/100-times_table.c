#include <stdio.h>
/**
*print_times_table -print times table up to input
*
*Description: writes times table up to input not more than 15
*
*@n: size of times table
*
* Return: Nothing
*/
void print_times_table(int n)
{
	int y, x, product;

	if (n <= 15 && n >= 0)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				product = (y * x);
				if (x != 0)
				{
					putchar(',');
					putchar(' ');
				}
				if (product < 10 && x != 0)
				{
					putchar(' ');
					putchar(' ');
					putchar((product % 10) + '0');
				}
				else if (product >= 10 && product < 100)
				{
					putchar(' ');
					putchar((product / 10) + '0');
					putchar((product % 10) + '0');
				}
				else if (product >= 100 && x != 0)
				{
						putchar((product / 100) + '0');
						putchar((product / 10) % 10 + '0');
						putchar((product % 10) + '0');
					}
					else
						putchar((product % 10) + '0');
				}
				putchar('\n');
			}
		}
	}
