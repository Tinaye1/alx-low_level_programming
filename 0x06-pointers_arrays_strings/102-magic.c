#include <stdio.h>
#include "main.h"
/*
 * main - not allowed to use a
 * -and modify p
 *description - one statement
 */

int main(void)
{
	int n;
	int a[5];

	a[2] = 1024;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
