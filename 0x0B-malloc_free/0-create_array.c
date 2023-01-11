#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Name of function
 * @size: size of array
 * @c: character to fill array
 * Return: Pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size <= 0)
		return ('\0');
	array = malloc(sizeof(char) * size);

	if (array == '\0')
		return ('\0');

	for (i < (int)size; i++)
	{
		*(array + i) = c
			i++;
	}
	*(array + i = '\0');

	return (array);
}
