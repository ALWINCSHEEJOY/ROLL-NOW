#include<stdio.h>
int pows(int x,int n){
int i,s=1;
for(i=0;i<n;i++){
s=s*x;}
return s;
}
void main()
{ int i, x,n,l,s=0;
int a[10];
scanf("%d",&n);
x=n;
l=s;
while(x!=0){
l++;
a[l-1]=x%10;
x=x/10;
}
for(i=0;i<l;i++){
s=s+pows(a[i],l);}
if(s==n){
printf("am\n");}
else{printf("nam\n");}
}
