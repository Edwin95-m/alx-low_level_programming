#include <stdio.h>
#include "main.h"

/**main-Entry point
 * Description-aprogram that returns the sign of an integer
 * return 1 if greater than zero and 0 if less than zero
 *
 */

int main(void)
{
	int n;

	if(n>0)
	{
		putchar('+');
		return(1);
	}
	else if(n==0)
	{
		putchar('0');
		return(0);
	}
	else
	{

		putchar('-');
		return(-1);
	}
}
