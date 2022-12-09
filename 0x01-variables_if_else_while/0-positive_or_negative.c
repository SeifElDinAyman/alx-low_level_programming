#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* main - prints if the number is postive, negative or 0*/
/* Return: Always 0*/

int main(void)
{
		int n;
	/* comment */
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		if (n > 0)
		{
			printf(" %d is postive\n", n);
		}
		else if (n == 0)
		{
			printf(" %d is Zero\n", n);
		}
		else if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		return (0);

}
