#include "main.h"

/**
*_isdigit - checks whether a charcateris a digit or not
*@c - tested character
*Return: 1 if it is , 0 if otherwise
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return(1);
	}
	else
	{
	return(0);
	}
}
