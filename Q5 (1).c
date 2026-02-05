#include<stdio.h>
void main(){
      int n=29,c = 0, i = 2;
      //printf("Enter a number --");
      //scanf("%d",&n);
      while ( i <= n){
        if ( n % i == 0){
            c++;
        }
        i++;
      }
      if ( c == 1)
        printf("Number %d is prime",n);
      else
        printf("Number %d is not prime",n);
}
