#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minimum number in array
 * @max: maximum number in array
 * Return: new allocated memory
 */

int *array_range(int min, int max)
{
	int size, i;
	int *output;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	output = malloc(sizeof(int) * size);
	if (!output)
		return (NULL);
	for (i = 0; i < size; i++)
		output[i] = min++;
	return (output);

}
