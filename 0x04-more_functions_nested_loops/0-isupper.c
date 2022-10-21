#include "main.h"
#include <stdio.h>

/**
 * checks if a value is uppercase
 * @c:character to be checked
 *
 * Return: 1 if c is capital, if not 0
 * */

int _isupper(int c)
{
	if (c>= 'A' && c <= 'Z')
		return(1);
	return(0);
}
