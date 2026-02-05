#include<stdio.h>
void main()
{
   int i , a=0, b=1, c, limit = 8;
   for ( i = 0 ;i <= limit ; i++){
    if ( i <= 1)
        printf("%d   ",i);
    else {
        c = a + b;
        printf("%d   ",c);
        a = b;
        b = c;
    }
   }
}
