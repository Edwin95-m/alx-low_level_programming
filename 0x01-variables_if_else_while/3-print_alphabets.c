#include <stdio.h>

int main()
{	
	char lower_alphabet = 'a';

	while (lower_alphabet<='z')
	{
		putchar(lower_alphabet);
			lower_alphabet++;
	}

	char upper_alphabet = 'A';

	while (upper_alphabet<='Z')
	{
		putchar(upper_alphabet);
			upper_alphabet++;
	}

	return (0);
}
