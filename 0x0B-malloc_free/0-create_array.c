#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates and array of chars, and
 * initializes it eith a special char
 * @size: size of array
 * @c: char to insert
 * Return: NULL if size is zero,
 * pointer to array if ita successful
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index]= c;

	return (array);
}
