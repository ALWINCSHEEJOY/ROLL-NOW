#include<stdio.h>
int pows(int x,int n){
int i,s=1;
for(i=0;i<n;i++){
	s=s*x;
}
return s;
}
void main()
{ int x,n,s=0,i;
printf("enter no:");
scanf("%d",&x);
printf("enter limit");
scanf("%d",&n);
for(i=0;i<n;i++){
	s+=pows(x,i);
}
printf("sum is\t%d\n",s);
}
