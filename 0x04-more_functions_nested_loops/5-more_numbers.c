#include "main.h"
/**
 * more_times - prints 10 times numbers from 0-14
 * Return: nothing
 **/

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 11; a++)
	{

		for (b = 0; b < 15; b++)
		{
			_putchar(b);
		}

		_putchar(a);

	}
