#include "main.h"
/**
 *sqrt_recursion_helper - function that calc the square root of a number
 * @n: integer number
 * @start: the number to start the search of root at.
 * @end: the number to end search at.
 * Return: the natural square root of a number.
 */
int sqrt_recursion_helper(int n, int start, int end)
{
	int mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == n)
		{
			return (mid);
		}
		if (mid * mid > n)
		{
			return (sqrt_recursion_helper(n, start, mid - 1));
		}
		return (sqrt_recursion_helper(n, mid + 1, end));
	}
	return (-1);
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer number
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_recursion_helper(n, 1, n));
}
