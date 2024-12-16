#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int value)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=0;

    if(front==0 && rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void display()
{
    struct node* temp;
    if(front==0 && rear==0)
    {
        printf("Empty queue\n");
    }
    else
    {
        temp=front;
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void dequeue()
{
    if(front==0 && rear==0)
    {
        printf("Empty queue\n");
    }
    else
    {
        struct node* temp;
        temp=front;
        printf("Deleted data: %d\n",front->data);
        front=front->next;
        free(temp);
    }
}
void peek()
{
    if(front==0 && rear==0)
    {
        printf("Empty queue\n");
    }
    else
    {
        printf("%d\n",front->data);
    }
}
int main()
{
    int choice,n;
    // enqueue(10);
    // enqueue(20);
    // enqueue(30);
    do
    {
        printf("Enter number: ");
        scanf("%d",&n);
        enqueue(n);
        printf("Enter 1 for more ");
        scanf("%d",&choice);
    }
    while(choice==1);
    printf("\nQueue:\n");
    display();
    printf("\n");

    // dequeue();
    dequeue();
    dequeue();

    peek();
}
