#include "main.h"

/**
 *
 * _islower returns 1 char is lowercase
 *
 * Return: 1 lowercase and otherwise
 **/

int _islower(int n)
{
	if (n >= 'a' && n <= 'z')
		return (1);
	else
		return (0);
}

