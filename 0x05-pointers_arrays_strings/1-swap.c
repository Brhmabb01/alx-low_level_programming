#include "main.h"

/**
 * swap_int - take in two variabl interger and swap them
 * @author abbas
 * @a: swap and store address as b
 * @b: swap and store address as a
 * Return: Alaways 0
 */

void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
