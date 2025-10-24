#include <stdio.h>
#define MAXSIZE 3

int queue[MAXSIZE];
int front = -1, rear=-1;

void enqueue(int item)
{
    if ((rear + 1) % MAXSIZE == front)
    {
        printf("Queue is full!\n");
        return;
    }
    if (front==-1)
        front=0;
    rear = (rear + 1) % MAXSIZE;
    queue[rear] = item;
    printf("%d is enqueued successfully.\n", item);
}
void dequeue()
{
    if (front==-1)
    {
        printf("Queue is empty!\n");
        return;
    }

    int item = queue[front];
    printf("Dequeued element: %d\n", item);
    if (front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front = (front + 1) % MAXSIZE;
    }
}

void display()
{
    if (front==-1)
    {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue elements are: ");
    int i = front;
    while (1)
    {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAXSIZE;
    }
    printf("\n");
}
int main()
{
    int choice, item;

    do
    {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to enqueue: ");
            scanf("%d", &item);
            enqueue(item);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Enter a valid choice!\n");
        }
    } while (choice != 4);

    return 0;
}

