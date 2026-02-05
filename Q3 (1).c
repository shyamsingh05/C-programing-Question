#include<stdio.h>
#include<conio.h>
void main()
{
   int tel_price,dis,namt;
   char c;
   printf("television price calculator..\n\n");
   printf("1. color television..\t");
   printf("2. B & W television..\t");
   printf("any for Exit\n");
   c = getch();
   if( c == '1'){
    printf("\nyou choose color Television..\n\n");
    printf("1. 24\"television..\t");
    printf("2. 32\" television..\t");
    c = getch();
    if ( c == '1'){
        printf("\n\nyou choose 24 inches\n\n");
        printf("enter price --");
        scanf("%d",&tel_price);
        dis = (tel_price * 10)/100;
        namt = tel_price - dis;
        printf("\n\nTelevision price -- %d", tel_price);
        printf("\n\nDiscount price -- %d", dis);
        printf("\n\nNet price --%d",namt);
    }
    else if ( c == '2'){
        printf("\n\nyou chose 32 inches\n\n");
        printf("Enter price --");
        scanf("%d",&tel_price);
        dis = (tel_price * 15)/100;
        namt = tel_price - dis;
        printf("\n\nTelevision price -- %d",tel_price);
        printf("\n\nDiscount price -- %d",dis);
        printf("\n\nNet price -- %d", namt);
    }

   }
     else if ( c == '2'){
        printf("\n\nYou chose B&W 21 inches\n\n");
        printf("Enter price --");
        scanf("%d",&tel_price);
        dis = (tel_price * 12)/100;
        namt = tel_price - dis;
        printf("\n\nTelevision price -- %d", tel_price);
        printf("\n\nDiscount price -- %d",dis);
        printf("\n\nNet price -- %d", namt);
   }

}
