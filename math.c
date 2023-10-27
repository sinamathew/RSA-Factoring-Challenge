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

int main(void)
{
	int x;
	int a = 9;
	int b = 3;

	x = _pow(a, b);
	printf("%d power %d is %d.\n", a, b, x);

	return (0);
}
