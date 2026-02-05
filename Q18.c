#include<stdio.h>
#include<conio.h>
int main()
{
    char c[10],ch[10];
    int i, j, x = 0;
    printf("Enter a string -- ");
    scanf("%s",&c);
    for ( i = 0 ; c[i]!='\0' ; i++){
        for ( j = i, x=0 ; c[j]!='\0' ; j++){
            ch[x++] = c[j];
            ch[x] = '\0';
            printf("%s  ",ch);
        }
    }
}
