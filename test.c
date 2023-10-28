#include "math.h"

int main(void)
{
	int i = 8;
	int j = 3;
	int k = 17;
	int y = 0;

	printf("%i\n", _pow(k, y));
	printf("%i\n", _pow(y, k));
	printf("%i\n", _pow(i, j));

	printf("\n%i\n", _mod(k, y));
	printf("%i\n", _mod(y, i));
	printf("%i\n", _mod(k, j));

	return (0);
}
