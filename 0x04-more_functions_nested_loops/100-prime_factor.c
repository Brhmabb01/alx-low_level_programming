#include <stdio.h>
#include "main.h"

/**
 * main - print the largest prime factor of 612852475143
 * Rturn: always 0
 */

int main(void)
{
	unsigned long int i, n = 612852475143i;

	for (i = 3; 1 < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%11u\n", n);
	return (0);
}
