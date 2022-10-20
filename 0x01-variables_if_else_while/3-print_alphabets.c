#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints alphabets
 * Return: 0
 *
 */

int main(void)
{	
	char lower_alphabet = 'a';

	while (lower_alphabet <= 'z')
	{
		putchar(lower_alphabet);
			lower_alphabet++;
	}

	lower_alphabet = 'A';

	while (lower_alphabet <= 'Z')
	{
		putchar(lower_alphabet);
			lower_alphabet++;
	}
	putchar('\n');

	return (0);
}
