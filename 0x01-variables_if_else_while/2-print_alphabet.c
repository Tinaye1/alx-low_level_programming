#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return(0);
}
