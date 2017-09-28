#include<stdio.h>
main()
{
int size,i,j,arr[30],temp;
printf("enter size of array\n");
scanf("%d",&size);
printf("\nenter the elements of array\n");
for(i=0;i<size;i++)
   scanf("%d",&arr[i]);
for(i=0;i<size-1;i++)
{ for(j=0;j<(size-i-1);j++)
  { if(arr[j]>arr[j+1])
    {	temp=arr[j];
    	arr[j]=arr[j+1];
    	arr[j+1]=temp;
    }
  }
}
printf("\nsorted array :\n");
for(i=0;i<size;i++)
	printf("%d\n",arr[i]);

}
