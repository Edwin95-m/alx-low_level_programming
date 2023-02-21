#include <stdio.h>
#include "main.h"

/**main-Entry point
 * Description- a program to check if a character is upper case
 * return 0
 *
 */

int isalpha(int c)
{
       if(c >= 'A'&& c <= 'Z')
	return(1);
	else
	 return(0);
}	
