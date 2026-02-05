#include<stdio.h>
void main()
{
    int n,arm, t, i, p , l ,limit;
    printf("enter a limit -- ");
    scanf("%d",&limit);
    for ( t = 1 ; t <= limit ; t++){
        n = t;
        for (l = 0 ; n > 0; l++, (n = n/10));
        for ( n = t , arm = 0; n > 0; (n = n/10)){
            for (i = 1,p = 1 ; i <= l; i++)
                p = p * ( n % 10 );
            arm = arm + p;
        }
        if ( arm == t){
            printf("%d ",arm);
            }
            else {
                    printf("1");
            }
    }
}
