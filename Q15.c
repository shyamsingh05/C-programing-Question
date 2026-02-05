#include<stdio.h>
void main()
{
    int arr[3][3];
    int i,j , sum = 0;
    printf("Enter matrix elements are -- \n\n");
    for ( i = 0 ; i < 3 ; i++){
        for ( j = 0 ; j < 3 ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix elements are -- \n\n");
    for ( i = 0 ; i < 3 ; i++){
        for ( j = 0 ; j < 3 ; j++){
            printf("%d   ",arr[i][j]);
        }
        printf("\n");
    }
    printf("sum of rows elements -- \n\n");
    for ( i = 0 ; i < 3 ; i++){
        for ( j = 0 , sum = 0 ; j < 3 ; j++){
            printf("%d   ",arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("=   %d\n",sum);
    }
}
