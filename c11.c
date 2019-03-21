#include<stdio.h>
void main()
{int y;
printf("enter year\n");
scanf("%d",&y);
if(y%100==0)
{
if(y%400==0)
{printf("leap year\n");
}
else 
printf("not leap year\n");}
else if(y%4==0)
{
printf("leap year\n");}
else{printf("not leap year\n");}
}

