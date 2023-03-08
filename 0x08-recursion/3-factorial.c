#include "main.h"
/**
 * factorial - function that returns factorial of number n.
 * @n: Integer number to calculate it's factorial
 * Return: factorial of n.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
