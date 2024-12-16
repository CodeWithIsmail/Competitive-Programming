#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
int empty()
{
    if(front==0 && rear==0) return 1;
    else return 0;
}
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
int dequeue()
{
    struct node *temp;
    temp=front;
    int top=front->data;
    if(front==rear)
    {
        front->next=0;
        rear->next=0;
    }
    else
    {
        front=front->next;
    }
    free(temp);
    return top;
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
    printf("\n");

    // dequeue();
    printf("%d\n",dequeue());
     printf("%d\n",dequeue());
    //dequeue();



}
