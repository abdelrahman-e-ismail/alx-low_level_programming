#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - a function that splits a string into words.
 * @str: string
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, size = 0, cp = 0, c = 0, x = 0;
	char **s;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
	{
		if ((str[size] != ' ' && str[size] != '\t') &&
		(str[size + 1] == ' ' || str[size + 1] == '\t' || str[size + 1] == '\0'))
			cp++;
	}
	s = malloc(sizeof(char *) * (cp + 1));
	if (s == NULL || cp == 0)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		if ((str[i] != ' ' && str[i] != '\t') &&
		(str[i - 1] == ' ' || str[i - 1] == '\t' || i == 0))
		{
			c = 0;
			for (j = i; str[j] != ' ' && str[j] != '\t' && str[j] != '\0'; j++)
			c++;
			s[x] = malloc(sizeof(char) * (c + 1));
			if (s[x] == NULL)
			{
				for (j = 0; j < x; x++)
					free(s[j]);
				free(s);
				return (NULL);
			}
			for (j = 0; j < c; j++)
				s[x][j] = str[i + j];
			s[x][c] = '\0';
			x++;
		}
	}
	s[x] = NULL;
return (s);
}
