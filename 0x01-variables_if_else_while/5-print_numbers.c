#include <stdlib.h>
#include <stdio.h>
#include <time.h>

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
