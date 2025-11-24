#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int counter=0;
struct node 
{
	int data;
	struct stack *Top;
};
struct stack *Top=NULL;

/*void createnode()
{
	
}*/
void push(int item)
{
	struct stack *newnode;
	newnode = (struct stack *)malloc(sizeof(struct stack));
	newnode->data = item;
	newnode->link = NULL;
	if (Top ==NULL)
	{
		Top = newnode;
		counter = counter + 1;
	}
	else
	{
		if(counter<max_size)
		{
			newnode->link = Top;
			Top= newnode;
		}
		else
			printf("stack is full")
	}
	
}
void traverselist()
{
	struct node*ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;
		
	}
	
}
void pop()
{ 	struct node *ptr;
	if (header!=NULL)
	{
		ptr=header;
		header=header->link;
		free(ptr);
	}
	else
	{
		printf("Empty list....Deletion is not possible\n");
	}
}



int main()
{
	int choice,item,key;
	do
	{
		printf("\n1.push\n2.pop\n3.display\n4.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1:
			        printf("enter the element to insert at front:");
				scanf("%d",&item);
				push(item);
				break;
			case 2: 
			        pop();
			        break;
			case 3:
			        printf("the element in list:\n");
			        travesestack();
			        break;
			case 4: 
			        break;
			
			default: 
			 	printf("enter the correct choice.\n");
				break;
		}
		
	}while(choice!=8);
	return (0);
}

	
	

