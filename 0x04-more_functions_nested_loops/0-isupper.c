#include "main.h"

/**
*_isupper - checks if a charcter is uppercase or not
*@c - character to be tested
*Return: 1 if its uppercase, 0 if otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return(1);
	
	else
		return(0);
}
