#include "main.h"

/**
 * _islower checks if a character is lowercase
 *
 * @n:the checker to be chaecked
 * Return: 1 if character is lowercase and 0 otherwise
 **/

int _islower(int n)
{
	if (n >= 'a' && n <= 'z')
		return (1);
	else
		return (0);
}

