#include<stdio.h>
void main()
{
    int arr[10];
    int m1 , m2 , i;
    m1 = m2 = 0;
    printf("Enter array elements -- \n\n");
    for ( i = 0 ; i < 10 ; i++)
        scanf("%d",&arr[i]);
    for ( i = 0 ; i < 10 ; i++){
        if (arr[i] > m1){
            m2 = m1;
            m1 = arr[i];
        }
        else if (arr[i] > m2 && arr[i] < m1){
            m2 = arr[i];
        }
    }
    printf("first maximum -- %d\n\n",m1);
    printf("second maximum -- %d\n\n",m2);
}
