#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry a number of base 16
 *Return: 0
*/
int main(void)
{int i;
char s;
for (i = 0 ; i < 10 ; i++)
{
	putchar('0' + i);
}
for (s = 'a' ; s <= 'f' ; s++)
{
	putchar(s);
}
putchar('\n');
return (0);
}

