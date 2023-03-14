#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars, and
 * initializes it with a specific char.
 * @size: the size of the array.
 * @c : the initail char.
 * Return: nothing
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return ('\0');
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
return (str);
}
