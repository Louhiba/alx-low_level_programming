#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 * Return: 0
*/
int main(void)
{
long int i;
for (i = 1 ; i < 90 ; i++)
{
	if (i < 10)
{
       	putchar('0');
}
	putchar('0' + i);
	putchar(',');
}
putchar('\n');
return (0);
}
