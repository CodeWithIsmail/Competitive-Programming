#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;
void enqueue(int value)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = 0;

    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
void display()
{
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        printf("Empty queue\n");
    }
    else
    {
        temp = front;
        while (temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}
void dequeue()
{
    if (front == 0 && rear == 0)
    {
        printf("Empty queue\n");
    }
    else
    {
        struct node *temp;
        temp = front;
        printf("Deleted %d\n", front->data);
        front = front->next;
        free(temp);
    }
}
int main()
{
    int choice = 1, n;
    do
    {
        printf("Enter data: ");
        scanf("%d", &n);
        enqueue(n);
        printf("Enter 1 for more:\n");
        scanf("%d", &choice);
    } while (choice == 1);

    display();
    dequeue();
    dequeue();
    dequeue();
}