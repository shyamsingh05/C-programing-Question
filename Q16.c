 #include<stdio.h>
void main()
{
    int arr[3][3],out[3];
    int i,j , sum = 0;
    printf("Enter matrix elements -- \n\n");
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
    printf("sum of columns elements are -- \n\n");
    for ( i = 0 ; i < 3 ; i++){
        for ( j = 0 , sum = 0 ; j < 3 ; j++){
            printf("%d   ",arr[i][j]);
            sum = sum + arr[j][i];
        }
        printf("\n");
        out[i] = sum;
    }
    printf("---------\n");
    for ( i = 0 ; i < 3 ; i++)
        printf("%d  ",out[i]);
}
