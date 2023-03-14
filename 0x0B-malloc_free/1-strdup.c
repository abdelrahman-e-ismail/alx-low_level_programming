#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: string to be copied
 * Return: nothing
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *s;

	if (str == NULL)
		return ('\0');
	for (size = 0; str[size] != '\0'; size++)
	{}
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
return (s);
}
