#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*Return: 0 (succses)
*/
int main(void)
{char s;
for (s = 'a' ; s <= 'z' ; s++)
{
if (s != 'q' && s != 'e')
putchar(s);
}
putchar('\n');
return (0);
}

