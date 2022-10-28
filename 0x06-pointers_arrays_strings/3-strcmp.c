#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @n1:input one
 *
 *@n2:input two
 *
 *Return:0
 */

int _strcmp(char *n1, char *n2)
{
	int i;

	for (i = 0; n1[i] != '\0' && n2[i] != '\0'; i++)
	{
		if (n1[i] != n2[i])
			return (n1[i] - n2[i]);
	}
	return (0);
