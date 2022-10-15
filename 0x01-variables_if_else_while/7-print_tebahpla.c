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
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
