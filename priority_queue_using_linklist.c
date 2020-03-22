#include <stdio.h>
#include<malloc.h>
struct node
{
  int data;
  int priority;
  struct node *next;  
};
struct node *front=NULL;
struct node *enqueue(int dat,int pri);
struct node *dequeue();
struct node *display();
struct node *enqueue(int dat,int pri)
{
  struct node *newnode;
  struct node *q;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=dat;
  newnode->priority=pri;
  if(front==NULL || pri<front->priority)
    {
        newnode->next=front;
        front=newnode;
    }
    else
    {
        q=front;
        while(q->next!=NULL && pri>=q->next->priority)
        {
            q=q->next;
            
        }
        newnode->next=q->next;
        q->next=newnode;
        
    }  
}
struct node *dequeue()
{
    struct node *temp;
    temp=front;
    if(front==NULL)
    {
        printf("\n QUEUE UNDERFLOW\n");
    }
    else
    {
        
       printf("\n The item which is deleted is %d ",temp->data);
       front=front->next;
       free(temp);
    }
}
struct node *display()
{
    struct node *temp;
    temp=front;
    if(front==NULL)
    {
        printf("\n QUEUE Empty");
    }
    
    else
    {
        printf("Queue is :\n");
		printf("Priority       Item\n");
		while(temp!= NULL)
		{
            printf("%5d        %5d\n",temp->priority,temp->data);
			temp = temp->next;
		}
    }
}
int main()
{
    int ch,dat,pri;
    
    do
    {
        printf("\nEnter following keys\n1:ENQUEUE\n2:DEQUEUE\n3:display\n4:(0) to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Input the item value to be added in the queue : ");
			scanf("%d",&dat);
			printf("Enter its priority : ");
			scanf("%d",&pri);
            enqueue(dat,pri);
            break;
            case 2:
            dequeue();
            break;
            case 3:
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
