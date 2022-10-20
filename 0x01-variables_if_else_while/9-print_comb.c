#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: print numbers
 * Return: 0
 *
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		 putchar(x + '0');
		if (x < 9)
	       	{
		putchar(44);
		putchar(32);
		}
		x++;
	 }

	 putchar('\n');
	 return (0);
}

