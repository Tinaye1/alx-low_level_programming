#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main prints alphabets
 *
 * description- prints the alphabet in reverse order
 *
 * Return:0
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
