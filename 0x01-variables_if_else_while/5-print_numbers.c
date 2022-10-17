#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main-prints base 16 numbers
 *
 * Return: 0
 * description- prints hexadecimals
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
