#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc */
/**
 * main - Entry point
 *
 *
 *  Return: Always 0 (success)
 */

int main(void)
{
		int n;
	/* comment */
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		if (n > 5)
			printf("Last digit of %d and greater than 5\n", n);
		else if (n == 0)
			printf("Last digit of %d and is 0\n", n);
		else if (n < 6)
			printf("Last digit of %d and is less than 6 and not 0\n", n);
		return (0);

}