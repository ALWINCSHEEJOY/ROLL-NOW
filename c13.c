#include<stdio.h>
void main()
{ int n,s=0;
printf("enter no:");
scanf("%d",&n);
while(n!=0){
	s+=n%10;
	n=n/10;
}
printf("sum is %d\n",s);
}

