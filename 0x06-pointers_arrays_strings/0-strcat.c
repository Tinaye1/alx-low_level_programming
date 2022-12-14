#include "main.h"
/**
 * _strcat -concatenates two strings
 *
 * @src:second string to copy
 *
 * @dest:string to be overwritten
 *
 * description: concatenates src and the end of dest
 *
 * Return:pointer to dest
 **/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[1] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
		{
			dest[i] = src[j];
			i++;
		}

	dest[i] = src[j];

	return (dest);
}
