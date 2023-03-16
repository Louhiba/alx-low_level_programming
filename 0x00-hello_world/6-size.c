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
printf("Size of int: %i bytes\n", sizeof(a));
printf("Size of float: %i bytes\n", sizeof(b));
printf("Size of double: %i bytes\n", sizeof(c));
printf("Size of char: %i byte\n", sizeof(d));
printf("Size of char: %zu byte\n", sizeof(e));
return (0);
}

