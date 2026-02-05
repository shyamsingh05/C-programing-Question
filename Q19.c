#include<stdio.h>
void main()
{
 int i , n , r , x, limit;
printf("Enter a limit -- ");
scanf("%d",&limit);
printf("\n\nSeries is -- \n\n");
for ( i = 1 ; i <= limit ; i++){
for ( n = i*i*i, r=0; n>0;(n=n/10)){
r = r * 10 + (n % 10);
}
printf("%d  ",r);
}
}
