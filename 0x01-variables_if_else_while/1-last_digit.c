#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry code
*Return:0(successes)
*/
int main(void)
{int n, i;
srand(time(0));
n = rand() - RAND_MAX / 2;
i = n % 10;
printf("Last digit of ");
printf("%d", n);
printf(" is ");
printf("%d", i);
if (i > 5)
	printf(" and is greater than 5\n");
else if (i == 0)
	printf(" and is 0\n");
else
	printf(" and is less than 6 and not 0\n");
return (0);
}

