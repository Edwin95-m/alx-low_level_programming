#include <stdio.h>

int main()
{	
	char lower_alphabet = 'a';

	while (lower_alphabet<='z')
	{
		putchar(lower_alphabet);
			lower_alphabet++;
	}

	return (0);

	char new_alphabet = 'A';

	while (new_alphabet<='Z')
	{
		putchar(new_alphabet);
			new_alphabet++;
	}

	return (0);
}
