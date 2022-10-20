#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints the alphabet
 * Return: o
 *
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;

	}
	putchar('\n');

	return (0);

}
