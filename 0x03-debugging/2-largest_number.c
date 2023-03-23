#include "main.h"

/**
 * largest_number - print the largestof 3 number
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number
 */

int largets_number(int a, int b, int c)
{
int largest;

if (a > b && b > c)
{
	largest = a;
}
else if (b > a && a > c)
{
	largest = b;
}
else
{
	largest =  c;
}
return (largest);
}
