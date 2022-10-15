#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main-prints 0-9 numbers
 * Return: 0
 * description- prints 0-9 with commas and space
 */

int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
