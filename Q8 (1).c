#include<stdio.h>
void main()
{

int n , c = 0 , i , arr[20];
printf("Enter a number -- ");
scanf("%d",&n);
while ( n > 0 ){
arr[c++]= n % 2;
n = n / 2;
}
for ( i = c - 1 ; i >= 0 ; i-- )
printf("%d",arr[i]);
}
