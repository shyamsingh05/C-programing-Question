#include<stdio.h>
void main()
{
int n;
printf("Enter a number -- ");
scanf("%d",&n);
if ( n >= 0 && n <= 9)
printf("one digit..\n\n");
else if ( n>= 10 && n <= 99)
printf(" two digit..\n\n");
else if ( n >= 100 && n <= 999)
printf("three digit..\n\n");
else
printf("wrong input..\n\n");
}
