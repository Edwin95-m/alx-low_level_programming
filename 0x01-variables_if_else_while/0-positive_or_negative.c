#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* betty style doc for function main goes there */
int main(void) /* betty style doc for function main goes there */ 

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d \n", n);

	if (n > 0)
	{
	printf("is positive \n");
	}
	else if (n < 0)
	{
	printf("is negative \n");
	}
	else if ((n = 0))
	{
	printf("is zero \n");
	}

	return (0);

}
