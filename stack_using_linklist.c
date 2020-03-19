#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;
struct node *push();
struct node *pop();
struct node *peak();
struct node *display();

struct node *push()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter data\t");
    scanf("%d",&newnode->data);
    newnode->next=top;
    top=newnode;
}
struct node *pop()
{
    int item;
    struct node *temp;
    temp=top;
    item=temp->data;
    if(top==NULL)
    {
        printf("\n Stack Empty");
    }
    else
    {
    top=top->next;
    free(temp);
    printf("\ndata which is deleted is %d",item);
    }
}
struct node *peak()
{
    if(top==NULL)
    {
        printf("\n Stack Empty");
    }
    else
    {
        printf(" %d",top->data);
        
    }
}
struct node *display()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
    {
        printf("\n Stack Empty");
    }
    
    while(temp!=NULL)
    {
        printf("\n%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int ch;
    do
    {
        printf("Enter\n1:push\n2:pop\n3:peak\n4:display\n5:(0) to exit\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
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

}
