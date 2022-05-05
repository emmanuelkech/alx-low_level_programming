#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 *
 * @size: size of the array to be initialized
 * @c: specific char to initialize the array with
 *
 * Return: If size == 0 || function fails - NULL
 * otherwise - a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	else
		array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	else
		for (index = 0; index < size; index++)
			array[index] = c;

	return (array);
}
