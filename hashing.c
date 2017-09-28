#include<stdio.h>
#include<stdlib.h>
int a[13];
void init()
{	int i;
	for(i=0;i<13;i++)
		a[i]=-1;
}
int hash(int k)
{	int h;
	h = k%13;
	return h;
}
int probe(int h)
{	int i,f=0;
	for(i=h;i<13;i++)
	{	if(a[i]==-1)
		{	return i;
			break;
			f=1;
		}
	}
	if(f==0)
		i=0;
	while(f==0 && i!=h)
	{	if(a[i]==-1)
		{	return i;
			break;
			f=1;
		}
		i++;
	}
	if(f==0)
		return (-1);
}
int search(int e)
{       int i,f=0;
	int h;
	h = hash(e);
        for(i=h;i<13;i++)
        {       if(a[i]==e)
                {       return i;
                        break;
                        f=1;
                }
        }
        if(f==0)
                i=0;
        while(f==0 && i!=h)
        {       if(a[i]==e)
                {       return i;
                        break;
                        f=1;
                }
                i++;
        }
        if(f==0)
                return (-1);

}

void display()
{	printf("\nHash  table\n");
	int i;
	for(i=0;i<13;i++)
		printf("%d\t",a[i]);
}
int main()
{	int ele,ch,k,h,i,f;
	init();
	while(1){
	printf("\nMenu\n1.Insert\n2.Search\n3.Display\n4.Exit\n");
	scanf("%d",&ch);
	if(ch==4)
	{	printf("\nExiting..");
		exit(0);
	}
	if(ch!=4){
	switch(ch)
	{
		case 1: printf("\nEnter element:\t");
			scanf("%d",&ele);
			f=0;
			for(i=0;i<13;i++)
			{	
				if(a[i]==ele)
				{	printf("\nElement already present");
					f=1;
				}
			}
			if(f!=1){
			h = hash(ele);
			k = probe(h); 
			if(k==-1)
			{	printf("\nHash TAble Full");
			
			}
			else
			{	a[k]=ele;
				display();
			}
			}
			break;
		case 2:printf("\nEnter Elemnt to be Searched");
			scanf("%d",&ele);
			h = search(ele);
			if(h == -1)
				printf("\nElement not found");
			else
				printf("\nElement Found at %d",h);
			break;
		case 3:display();
			break;
		default : exit(0);
	}
	}
	}
	return 0;
}
