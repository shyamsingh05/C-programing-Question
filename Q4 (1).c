#include<stdio.h>
void main()
{
int n , t, p = 0;
printf("Enter a number -- ");
scanf("%d",&n);
t = n;
while(n > 0){
p = p * 10 + (n%10);
n = n / 10;
}
if (p == t)
printf("number %d is palindrome.",t);
else
printf("number %d is not palindrome");
}
