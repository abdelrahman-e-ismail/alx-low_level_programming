#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: the size of av
 * @av: array of strings
 * Return: pointer to new string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, size = 0, c = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}
	str = malloc(sizeof(char) * (size + ac + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[c++] = av[i][j];
		}
		str[c++] = '\n';
	}
return (str);
}
