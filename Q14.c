#include<stdio.h>
void main()
{
    int n , n1 , i;
    printf("Enter a number -- ");
    scanf("%d",&n);
    printf("\nSeries of %d is -- \n\n",n);
    for ( n1 = 0 ; n > 0 ; ( n = n / 10)){
        n1 = n1 * 10 + ( n % 10);
    }
    for ( ; n1 > 0 ; ( n1 = n1 / 10)){
        for ( n = n1, i = 0 ; n > 0 ; ( n = n / 10)){
            i = i * 10 + ( n % 10);
            printf("%d  ",i);
        }
    }
}
