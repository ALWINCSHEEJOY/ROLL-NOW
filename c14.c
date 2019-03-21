#include<stdio.h>
void main()
{int n,c,s=0;
printf("enter no:");
scanf("%d",&n);
c=n;
while(n!=0){
	s=s*10+n%10;
	n=n/10;
}
if(c==s){
	printf("pali\n");}
else{
	printf("np\n");
}
}
