#include<stdio.h>
void main()
{
char name[20];
int cpro,ca,os;
float total,per;
printf("enter student Name --");
scanf("%[^\n]s",&name);
printf("enter student marks -- (1-100) \n\n");
printf("c programming -- ");
scanf("%d",&cpro);
printf("comp.. architecture --");
scanf("%d",&ca);
printf("operating system --");
scanf("%d",&os);
total =  cpro + ca + os;
per = (total * 100)/300;
printf("\nstudent details -- \n\n");
printf("name -- %s\n\n",name);
printf(" c programming -- %d\n\n",cpro);
printf("computer.. archi.. --%d\n\n",ca);
printf("operating system -- %d\n\n",os);
printf("total marks -- %.0f / 300\n\n",total);
printf("percentage -- %.2f %%\n\n",per);
if (per >= 60)
printf("first division\n\n");
else if ( per >= 48)
printf("second division\n\n");
else if ( per >= 36)
printf(" third division\n\n");
else
printf("fail\n\n");
}
