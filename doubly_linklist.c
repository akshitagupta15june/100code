#include <stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *start=NULL;
struct node *last=NULL;
struct node *create_list();
struct node *insert_at_beg();
struct node *insert_at_nth();
struct node *insert_at_end();
struct node *delete_at_beg();
struct node *delete_at_end();
struct node *delete_at_nth();
struct node *doubly_sort();
struct node *reverse_list();
struct node *display();
struct node *create_list()
{
    struct node *newnode;
    int n,dat;
    printf("\n Enter no. of elements you want to enter in Doubly Linklist\t");
    scanf("%d",&n);
    if(n>=1)
    {
        start=(struct node*)malloc(sizeof(struct node));
        if(start!=NULL)
        {
        printf("\nEnter data 1\t");
        scanf("\t%d",&dat);
        start->data=dat;
        start->next=NULL;
        start->prev=NULL;
        last=start;
    
    for(int i=2;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode!=NULL)
        {
        printf("\nEnter data %d\t",i);
        scanf("\t%d",&dat);
        newnode->data=dat;
        newnode->next=NULL;
        newnode->prev=last;
        last->next=newnode;
        last=newnode;
        }
    
    else
    {
        printf("\n unable to allocate memory");
        break;
    }
    
    }
    printf("\n LINKLIST CREATED SUCCESSFULLY");
        }
        else
	    {
	        printf("unable to allocate memory");
	    }
    }
    display();
}
struct node *insert_at_beg()
{
    printf("\n INSERT AT BEGINNING OF DOUBLY LINKLIST");
    int dat;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(start!=NULL)
    {
        printf("\nEnter data to enter at beginning \t");
        scanf("%d",&dat);
        newnode->data=dat;
        newnode->next=start;
        newnode->prev=NULL;
        start=newnode;
    }
    display();
}
struct node *insert_at_nth()
{
    int dat,n;
    struct node *link=start;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n INSERT AT n th position linklist");
    printf("\n Enter at which position you want to enter\t");
    scanf("%d",&n);
    printf("\n Enter data to enter at n th position \t");
    scanf("%d",&dat);
    newnode->data=dat;
    if(n==1)
	{
        newnode->prev=NULL;
		newnode->next=start;
		start=newnode;
	}
    for(int i=1;i<n;i++)
    {
        link=link->next;
    }
    newnode->prev=link;
    newnode->next=link->next;
    link->next=newnode;
    display();
}
struct node *insert_at_end()
{
    int dat;
    struct node *link=start;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n INSERT AT end of linklist");
    printf("\nEnter data to enter at end \t");
    scanf("%d",&dat);
    newnode->data=dat;
    while(link->next!=NULL)
    {
        link=link->next;
    }
    newnode->prev=link;
    link->next=newnode;
    newnode->next=NULL;
    display();
}
struct node *delete_at_beg()
{
    printf("\n  Deletion at beginning of linklist");
    struct node *link=start;
    if(link==NULL)
	{
		printf("\nempty\n");
	}
    else
    {
    start=start->next;
    start->prev=NULL;
    printf("\nnode deleted %d\t",link->data);
    free(link);
    }
    display();
}
struct node *delete_at_end()
{
    printf("\n  Deletion at end of linklist");
    struct node *link=start;
    struct node *link1;
    if(link==NULL)
	{
		printf("\nempty\n");
	}
    else
    {
        while(link->next!=NULL)
        {
            link1=link;
            link=link->next;
        }
        link1->next=NULL;
        printf("\n Item deleted is %d\t",link->data);
        free(link);
    }
    display();
}
struct node *delete_at_nth()
{
    int n;
    printf("\n  Deletion at end of linklist");
    struct node *link=start;
    struct node *link1;
    if(link==NULL)
	{
		printf("\nempty\n");
	}
    printf("\nEnter the position where you want to delete  ");
    scanf("\t%d",&n);
    for(int i=1;i<=n;i++)
    {
        link1=link;
        link=link->next;
    }
    printf("\n ITem deleted is%d \t",link->data);
    link1->next=link->next;
    link->next->prev=link1;
    free(link);
    display();
}
struct node *doubly_sort()
{
 printf("\nSORTED LINKLIST\n");
struct node *q,*p;
q=start;
int data;
while(q!=NULL)
{
p=q->next;
while(p!=NULL)
{
if(q->data>p->data)
{
data=q->data;
q->data=p->data;
p->data=data;
}
p=p->next;
}
q=q->next;
}
printf("linklist is sorted\n");
display();	
}
struct node *reverse_list()
{
    struct node *link=start;
    struct node *tail=start;
    struct node *nex;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    
    while(link!=NULL)
    {
        nex=link->next;
        link->next=link->prev;
        link->prev=nex;
        link=nex;
    }
    link=start;
    start=tail;
    tail=link;
    display();
    
}
struct node *display()
{
    printf("\n LINK DISPLAY\n");
	struct node *link=start;
	while(link!=NULL)
	{
		printf("%d  ",link->data);
		link=link->next;
	}
}
int main()
{
	create_list();
	insert_at_beg();
	insert_at_nth();
	insert_at_end();
	delete_at_beg();
	delete_at_end();
	delete_at_nth();
	doubly_sort();
    reverse_list();
	return 0;
	
}

