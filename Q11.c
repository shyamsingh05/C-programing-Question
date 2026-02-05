#include<stdio.h>
void main(){
    int arr[11] , data ,n = 10,pos ,i;
    printf("Enter 10 array element -- \n\n");
    for ( i = 0 ; i < n ; i++)
        scanf("%d",&arr[i]);
    printf("Array Element are -- \n\n");
    for ( i = 0 ; i < n ; i++)
        printf("%d     ",arr[i]);
    printf("\n\nEnter data -- ");
    scanf("%d",&data);
    printf("Enter position -- ");
    scanf("%d",&pos);
    for ( i = n ; i > pos ; i-- )
        arr[i] = arr[i-1];
    arr[pos] = data ;
    n = n + 1;
    printf("After insertion array element are -- \n\n");
    for ( i = 0 ; i < n ; i++)
        printf("%d   ",arr[i]);
}
