#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - check sign of numbers
 *
 * @i: this the argument passed to our function
 *
 * no return
*/

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative", i);
}
