#include "main.h"
/**
 * _isalpha - returns 1 if c is a letter
 *
 * @n: character to be checked
 *
 * Return:1 if letter otherwise 0
 **/

int _isalpha(int n)
{
	if ((n <= 90) && (n >= 65))
		return (1);
	else if ((n >= 97) && (n <= 122))
		return (1);
	else
		return (0);
}
