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
n=rand();
printf("%d\n", n);
if (n > 0)
	printf(" is positive \n");
else if (n < 0)
	printf(" is negative \n");
else
printf(" is zero \n");
return (0);
}

