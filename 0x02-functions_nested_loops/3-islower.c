#include "main.h"

/**
 *
 * _islower returns 1 cahr is lowercase
 *
 * Return: 1 lowercase and otherwise
 **/

int test_islower(int c){

	if(c >= 97 && c <= 122)
		return (1);
	else
		return(0);
}
