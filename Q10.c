#include<stdio.h>
void main()
{
int arr[10];
int i , data , cnt = 0;
printf("Enter Array Elements -- \n\n ");
for ( i = 0 ; i < 10 ; i++)
scanf("%d",&arr[i]);
printf("Array Elements are -- \n\n");
for ( i = 0 ; i < 10 ; i++)
printf("%d ",arr[i]);
printf("\n\nEnter data you want to find -- ");
scanf("%d",&data);
printf("\n\n");
for ( i = 0 ; i < 10 ; i++){
if ( arr[i] == data){
printf("Data Found -- %d\n\n",data);
cnt++;
break;
}
}
if ( cnt == 0)
printf("Data not found -- %d",data);
}
