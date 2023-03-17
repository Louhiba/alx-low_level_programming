#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Return: 0 (sucsses)
*/
int main(void)
{char s;
for (s = 'a'; s <= 'z'; s++)
{putchar(s);
}
for (s = 'A'; s <= 'Z'; s++)
{putchar (s);
}
putchar ('\n');
return (0);
}
