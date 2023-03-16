#include<stdio.h>
/**
* main - Entry point
* Return: 0 (succses)
*/
int main(void)
{int b;
float e;
long int c;
char a;
long long int d;
printf("Size of int: %i byte(s)\n", sizeof(a));
printf("Size of float: %i byte(s)\n", sizeof(b));
printf("Size of double: %i byte(s)\n", sizeof(c));
printf("Size of char: %i byte(s)\n", sizeof(d));
printf("Size of char: %zu byte(s)\n", sizeof(e));
return (0);
}

