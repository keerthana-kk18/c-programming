/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define size 5
int queue[size];
int front=0;
int rear=-1;
int isfull()
{
    return rear==size-1;
}
int isempty()
{
    return front>rear;
    
}
int enqueue(int data)
{
    if(isfull())
    {
        printf("Queue is full%d\n",data);
        return 0;
    }
    else
    {
        rear++;
        queue[rear]=data;
        printf("%d inserted into the queue\n",data);
        return 1;
    }
}
int dequeue()
{
    if(isempty())
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        int value=queue[front];
        front++;
        printf("%d deleted from the queue\n",value);
        return value; 
    }
}
void display()
{
    if(isempty())
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("current queue: ");
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    enqueue(40);
    display();
    dequeue();
    display();

    return 0;
}
