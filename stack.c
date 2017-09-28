#include<stdio.h>
main()
{
int a[20],i,ch,top,e;
do
{
printf("1.push\n2.pop\n3.display\n4.exit");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("enter element");
        scanf("%d",&e);
        top=-1;
        if(top==20)
		printf("overflow");
        else
	 {	top++;
		a[top]=e;
	 }
        break;
case 2: if(top==-1)
		printf("empty stack");
	else
	{	printf("\ndeleted element %d",a[top]);
		top--;
	}
	break;
case 3: if(top==-1)
		printf("empty stack");
	else
	{ for(i=0;i<=top;i++)
	      printf("\n%d\n",a[i]);
	}
	break;
case 4: break;
default: printf("invalid choice");
}
}while(ch!=4);
}
