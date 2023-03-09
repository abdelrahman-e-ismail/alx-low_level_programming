#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: the string to be searched
 * @needle: substrin to search for
 * Return: a pointer to the beginning of the located substring, or     NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start, *p1, *p2;

	while (*haystack)
	{
		start = haystack;
		p1 = start;
		p2 = needle;
		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (!*p2)
			return (start);
		haystack++;
	}
	return ('\0');
}