#include<stdio.h>
#define maxsize 3
int queue[maxsize],front=-1,rear=-1;
void enqueue(int item)
{
	if(rear==maxsize-1)
	{
		printf("the queue is full\n");
		return;
	}
	if(front==-1)
	front=0;
        rear++;
        queue[rear]=item;
        printf("%d is enqueued successfully\n",item);
}
void dequeue()
{
	if(front==-1  || front>rear)
	{
		printf("the last element is dequeued,the queue is empty\n");
		return;
	}
	int item=queue[front];
	front++;
	printf("the dequeue elements is: %d \n",item);
	if(front>rear)
	{
		front=-1;
		rear=-1;
	}
}
void display()
{
 	int i;
 	if(front==-1)
 	{
		printf("the queue is empty\n");
		return;
	}
	printf("queue elements are:");
	for(i=front;i<=rear;i++)
	{
		printf("%d ",queue[i]);
	}
	
	printf("\n");
}

int main()
{
	int choice,item;
	do
	{
		printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1: printf("enter the element to push:");
				scanf("%d",&item);
				enqueue(item);
				break;
			case 2: dequeue();
				break;
			case 3: display();
			        break;
			case 4: break;
			default: printf("enter the correct choice.\n");
		}
	}while(choice!=4);
	return (0);
}
