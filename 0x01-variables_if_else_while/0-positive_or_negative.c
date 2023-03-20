#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine if a random is positve, negative or zero
 * 
 * Return: 0 on sucess
 */
int main(void)
{	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is %s\n", n,"is positive ");
	}
	else if (n < 0)
	{
		printf("%d is %s\n", n,"is negatvie");
	}	
	else
	{ 
		printf("%d is %s\n", n,"is zero");
	}
	return(0);
}
