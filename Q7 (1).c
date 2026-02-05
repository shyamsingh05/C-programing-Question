#include<stdio.h>

void main()
{
    int n = 5 , i , j;
    for ( i = 1 ; i <= n+n-1 ; i++){
        if ( i <= n){
            printf("%*c",n+1-i,' ');
            for ( j = 1 ; j <= i ; j++){
                printf("* ");
            }
        }

        else {
            printf("%*c",i+1-n,' ');
            for ( j = 1 ; j <= n-(i-n) ; j++){
                printf("* ");
            }
}
printf("\n");
}
}
