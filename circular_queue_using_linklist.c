#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node *enqueue(int data);
struct node *dequeue();
struct node *peak();
struct node *display();
struct node *enqueue(int data)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=newnode;
        rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
    
}
struct node *dequeue()
{
    struct node *temp;
    temp=front;
    if(front==NULL && rear==NULL)
    {
        printf("\n QUEUE UNDERFLOW\n");
    }
    else if(front==rear)
    {
        printf("Item deleted %d ",front->data);
        front=NULL;
        rear=NULL;
    }
    else
    {
       printf("\n The item which is deleted is %d ",temp->data);
       front=front->next;
       free(temp);
    }
}
struct node *peak()
{
    if(front==NULL && rear==NULL)
    {
        printf("\n QUEUE Empty");
    }
    else
    {
        printf(" %d",front->data);
        
    }
}
struct node *display()
{
    struct node *temp;
    temp=front;
    if(front==NULL && rear==NULL)
    {
        printf("\n QUEUE Empty");
    }
    
    while(temp!=NULL)
    {
        printf("\n%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    
    int ch,data;
    system("clear");
   
    do
    {
        printf("\nEnter following keys\n1:ENQUEUE\n2:DEQUEUE\n3:PEAK\n4:display\n5:(0) to exit\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter data\t");
            scanf("%d ",&data);
            enqueue(data);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            peak();
            break;
            case 4:
            display();
            break;
            default:
            printf("wrong choice");
        }
    }
        while(ch!=0);
        ch=getchar();
        return 0;
}
