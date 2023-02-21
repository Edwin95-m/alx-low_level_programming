#include <stdio.h>
#include "main.h"

/**main-Entrypoint
 * Description- a program that checks if a character is lower case
 * return 1 if character is lowercase and  0 otherwise
 *
 */

int _islower(int ch)
{
	if(ch <='a' && ch <='z')
		return(1);
	else
		return(0);
}


