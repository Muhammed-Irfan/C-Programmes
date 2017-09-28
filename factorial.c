#include<stdio.h>
main(){
int n,fact=1,i;
printf("enter number /n");
scanf("%d",n)
for(i=n;i>0;i--)
{
fact=fact*i;
}
printf("factorial is %d",fact);
}
