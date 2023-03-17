#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry code use if
 * Return: 0 (success)
*/
int main(void)
{int n;
srand(time(0));
n = rand();
if (n > 0)
	printf(" is positive\n", n);
else if (n == 0)
	printf(" is zero\n", n);
else
printf(" is negative\n", n);
return (0);
}

