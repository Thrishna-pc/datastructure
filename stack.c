#include<stdio.h>
#define maxsize 3
int s[maxsize],top=-1;
void push(int item)
{
	if(top>=maxsize)
	{
		printf("stack is full\n");
	}
	else 
        {
        	top=top+1;
        	s[top]=item;
        	printf("%d is pushed successfully\n",item);
        }
}
void pop()
{
	if(top<0)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("the popped elements is: %d \n",s[top]);
		top=top-1;
	}
}
void display()
{
 	int i;
	printf("elements are:");
	for(i=top;i>=0;i--)
	{
		printf("%d ",s[i]);
	}
	
	printf("\n");
}

int main()
{
	int choice,item;
	do
	{
		printf("1.push\n2.pop\n3.display\n4.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1: printf("enter the element to push:");
				scanf("%d",&item);
				push(item);
				break;
			case 2: pop();
				break;
			case 3: display();
			        break;
			case 4: break;
			default: printf("enter the correct choice.\n");
		}
	}while(choice!=4);
	return (0);
}
