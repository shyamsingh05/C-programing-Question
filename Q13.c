#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int arr[10] , i , j , k , n = 10;
   printf("Enter 10 unique elements -- \n\n");
   for ( i = 0 ; i < n ; i++){
    printf("Enter [ %d ] elements -- ",i);
    scanf("%d",&arr[i]);
    for ( j = 0 ; j < i ; j++){
        if ( arr[i] == arr[j]){
            system("cls");
            printf("Enter 10 unique elements -- \n\n");
            for ( k = 0 ; k < i ; k++){
                printf("Enter [ %d ] element -- %d\n",k,arr[k]);
            }
            i--;
            break;
        }
    }
   }
   printf("\n\nArray elements are -- \n\n");
   for ( i = 0 ; i < n ; i++){
    printf("%d   ",arr[i]);

   }
   printf("\n\nPrime array elements are -- \n\n");
   for ( i = 0 ; i < n ; i++){
    for ( j = 2, k = 0; j <= arr[i];j++){
        if ( arr[i] % j == 0)
            k++;
    }
    if( k == 1){
        printf("%d ",arr[i]);
    }
   }
}
