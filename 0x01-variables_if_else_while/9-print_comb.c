#include<stdio.h>
/**
 *main - Entry numbers from 0 to 9
 *Return: 0 (sucsses)
*/
int main(void)
{int i;
for (i = 0 ; i < 10 ; i++)
{       putchar(i + '0');
	if (i == 9) continue;
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}

