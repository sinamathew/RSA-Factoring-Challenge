#include "math.h"


/**
 * pow - finds the exponent of a number
 * @n: the number
 * @i: the index
 *
 * By: Sina Mathew
 *
 * Return: final value of the number
 */
int _pow(int n, int i)
{
	int result = 1;
	int j = 0;

	while (j < i)
	{
		result *= n;
		j++;
	}

	return (result);
}

/**
 * _mod - find the remainder of a number
 * @n: the number
 * @d: the divisor
 *
 * By: Sina Mathew
 *
 * Return: the remainder
 */
int _mod(int n, int d)
{
	int r;

	if (d > n)
		return (n);
	else if (d == 0)
		return(d);
	else
	{
		r = n % d;
		return (r);
	}
}
