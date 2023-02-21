#include <stdio.h>
#include "main.h"


/**main-Entry point
 * Description- a program to print the alphabet 10 times
 * return 0
 *
 */

int main(void)
{
	char ch;
	int i;

	i=0;
	while(i <= 10)
	{
		ch='a';
		while(ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		i++;
	}

	return(0);
}
