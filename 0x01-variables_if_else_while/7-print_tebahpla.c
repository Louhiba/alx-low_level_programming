#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry code
 *Return: 0 (sucsses)
*/
int main(void)
{char c;
for (c = 'z' ; c >= 'a' ; c--)
{
	putchar(c);
}
putchar('\n');
return (0);
}

