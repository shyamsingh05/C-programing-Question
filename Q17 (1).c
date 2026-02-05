 #include<stdio.h>
void main()
{
    int a[5][5], b[5][5],c[5][5];
    int r1 , c1 , r2 , c2 , i , j , k;
    printf("Enter size of rows and cols (1-5)--\n");
    printf("Enter first matrix --\n\n");

    printf("rows --");scanf("%d",&r1);
    printf("cols --");scanf("%d",&c1);

    printf("Enter second matrix --\n\n");

    printf("rows --");scanf("%d",&r2);
    printf("cols --");scanf("%d",&c2);

    if ( c1 == r2){
        printf("\n\nEnter first matrix elements --\n\n");
        for ( i = 0 ; i < r1 ; i++){
            for ( j = 0 ; j < c1 ; j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("\n\nEnter second matrix elements --\n\n");
        for ( i = 0 ; i < r2 ; i++){
            for ( j = 0 ; j < c2 ; j++){
                scanf("%d",&b[i][j]);
    }
        }

          printf("\n\nAfter multiplication matrix element are -- \n\n");
          for ( i = 0 ; i < r1 ; i++){
            for ( j = 0 ; j < c2 ; j++){
                c[i][j] = 0;
                for ( k = 0 ; k < c1 ; k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
                printf("%d  ",c[i][j]);
            }
            printf("\n");
          }
    }
    else{
        printf("\n\nMultiplication not performed ... \n\n");
    }
}
