#include <stdio.h>
#include "main.h"

/*main-Entry point
 * Description- a program that prints the alphabet
 * return 0 
 *
 */

int main(void)
{
	char ch;
	ch='a';
	while(ch<='z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

}
	
