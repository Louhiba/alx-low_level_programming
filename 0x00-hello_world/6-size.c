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
printf("Size of a char: %i byte(s)\n", sizeof(a));
printf("Size of an int: %i byte(s)\n", sizeof(b));
printf("Size of a long int: %i byte(s)\n", sizeof(c));
printf("Size of a long long int: %i byte(s)\n", sizeof(d));
printf("Size of a float: %i byte(s)\n", sizeof(e));
return (0);
}

