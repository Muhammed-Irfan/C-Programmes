#include<stdio.h>
main()
{
int size,i,j,a[30],temp;
printf("enter size of array\n");
scanf("%d",&size);
printf("\nenter the elements of array\n");
for(i=0;i<size;i++)
   scanf("%d",&a[i]);
for(i=0;i<size;i++)
{ temp=a[i];
  j=i-1;
  while(temp<a[j] && j>=0)
  {	a[j+1]=a[j];
  	j--;
  }
  a[j+1]=temp;
}
printf("\nsorted array :\n");
for(i=0;i<size;i++)
        printf("%d\n",a[i]);
}

