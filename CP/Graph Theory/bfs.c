#include <stdio.h>
#include <stdlib.h>
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
int dequeue()
{
    struct node *temp;
    temp = front;
    int ans = front->data;
    if (front == rear)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        front = front->next;
        temp->next = 0;
    }
    free(temp);
    return ans;
}
int is_empty()
{
    if (front == 0 && rear == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int i;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    int graph[7][7] =
        {
            {0, 1, 1, 1, 0, 0, 0},
            {1, 0, 1, 0, 0, 0, 0},
            {1, 1, 0, 1, 1, 0, 0},
            {1, 0, 1, 0, 1, 0, 0},
            {0, 0, 1, 1, 0, 1, 1},
            {0, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 1, 0, 0}
        };
    int startnode = 1;
    visited[startnode] = 1;
    printf("%d ", startnode);

    enqueue(startnode);
    while (!is_empty())
    {
        int te = dequeue();
        for (i = 0; i < 7; i++)
        {
            if (visited[i] == 0 && graph[te][i] == 1)
            {
                printf("%d ", i);
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
}