#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(void)

{
	char letter = 'a';

	while (letter <= 'z')
	{

		if(letter == 'q')
		{
			letter++;
		}
		else if (letter == 'e')
		{
			letter++;
		}
		else
			putchar(letter);
		letter++;
	}
}
putchar('\n');
return(0);
}
