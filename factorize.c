#include <stdio.h>
#include <math.h>
#define MAX 200

/**
 * factorize - factorize a number into two smaller numbers and print
 * @n: the number to be factorize
 *
 * By: Sina Mathew
 */
void factorize (int n)
{
	int i, p, q;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			p = i;
			q = n / i;
		}
	}
	printf("%d=%d*%d\n", n, p, q);
}

/**
 * main - main factorize code
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: 0 on success,  on error
 *
 * By: Sina Mathew
 */
int main(int argc, char *argv[])
{
	FILE *file;
	int n;
	char line[MAX];

	if (argc != 2)
	{
		printf("Usage: %s <file>\n", argv[0]);
		return (1);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		perror("Error opening file");
		return (1);
	}

	while (fgets(line, sizeof(line), file) != NULL)
	{
		if (sscanf(line, "%d", &n) ==1)
			factorize(n);
	}

	fclose(file);
	return (0);
}
