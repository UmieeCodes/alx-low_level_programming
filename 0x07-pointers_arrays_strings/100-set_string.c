#include "main.h"

/**
 * set_string - sets the value of a pointer to a character
 * @s: pointer to change
 * @to: string to chnage pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
