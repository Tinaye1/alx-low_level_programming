#include "main.h"
/**
 * times_table - prints times table to 9
 *
 * Return: void
 */
void times_table(void)
{
	int y,x,product;

	product =0;

	for (y = 0; y <= 9; y++)
	{
		for (x =0; x <= 9; x++)
		{
			product = y * x;
			if (x != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if ((product < 10) && (x != 0))
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
			else
				_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
