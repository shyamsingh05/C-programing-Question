#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10];
    int i , j , temp ,n = 10;
    char c;
    printf("Enter 10 array elements\n\n");
    for ( i = 0 ; i < n ; i++)
        scanf("%d",&arr[i]);
    printf("Array elements are -- \n\n");
    for ( i = 0 ; i < n ; i++){
        printf("%d    ",arr[i]);
    }
    printf("\n\nSorting options--\n\n");
     printf("1. Selection sorting\n");
      printf("2. Bubble sorting\n");
       printf("\n\nChoose any one ---");
       c = getch();
       if ( c == '1'){
        printf("\n\nYou choose selection sorting.\n\n");
        for ( i = 0 ; i < n-1 ; i++){
            for ( j = i + 1 ; j < n ; j++){
                if ( arr[i] > arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for ( i = 0 ; i < n ; i++){
            printf("%d   ",arr[i]);
        }
       }
       else if ( c == '2'){
            printf("\n\nYou choose bubble sorting.\n\n");
      for ( i = 0 ; i < n-1 ; i++){
            for ( j = i + 1 ; j < n-1 ; j++){
                if ( arr[i] > arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
              }
            }
          }
          for ( i = 0 ; i < n ; i ++){
            printf("%d   ",arr[i]);
          }
       }
}
