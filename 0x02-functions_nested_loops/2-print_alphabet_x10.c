#include "main.h"
/**
 * print_alphabet_x10 - print all char from a to z
 * Description: 'the program's description'
 */
void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
{
	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
}