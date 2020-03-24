#include <stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
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
struct node *circular_sort();
struct node *reverse_list();
struct node *display();
struct node *create_list()
{
   struct node *link;
	struct node *p;
	printf("\nCREATE A CIRCULAR LINKLIST\n");
	int n;
	printf("\nenter no. of nodes you want to enter\n");
	scanf("%d",&n);
	
		link=(struct node*)malloc(sizeof(struct node));
		link->next=NULL;
		printf("enter data 1\t");
		scanf("%d",&link->data);	    
		start=link;
		for(int i=2;i<=n;i++)
		{
		p=(struct node*)malloc(sizeof(struct node));
		link->next=p;
		p->next=NULL;
		printf("enter data %d\t",i);
		scanf("%d",&p->data);
		link=p;		
	    }
	    link->next=start;
	    printf("\n CIRCULAR LINKLIST CREATED SUCCESSFULLY\n");
	    display();
}
struct node *insert_at_beg()
{
    struct node *link=start;
    printf("\n INSERT AT BEGINNING");
    int dat;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data to enter at beginning \t");
        scanf("%d",&dat);
        newnode->data=dat;
        newnode->next=start;
        
    while(link->next!=start)
    {
        link=link->next;
    }
    link->next=newnode;
    start=newnode;
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
    printf("\nEnter data to enter at n th position \t");
    scanf("%d",&dat);
    newnode->data=dat;
    if(n==1)
	{
		newnode->next=start;
		start=newnode;
	}
    for(int i=1;i<n;i++)
    {
        link=link->next;
    }
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
    while(link->next!=start)
    {
        link=link->next;
    }
    link->next=newnode;
    newnode->next=start;
    display();
}
struct node *delete_at_beg()
{
    printf("\n  Deletion at beginning of linklist");
    struct node *link=start;
    struct node *link1=start;
    struct node *link2;
    if(link==NULL)
	{
		printf("\nempty\n");
	}
    else
    {
    start=start->next;
    printf("\nnode deleted %d\t",link->data);
    link2=link;
    free(link);
    }
    while(link1->next!=link2)
    {
        link1=link1->next;
    }
    link1->next=start;
    display();
}
struct node *delete_at_end()
{
    printf("\n  Deletion at end of linklist\n");
    struct node *link=start;
    struct node *link1;
    if(link==NULL)
	{
		printf("\nempty\n");
	}
    else
    {
       while(link->next!=start)
       {
           link1=link;
           link=link->next;
       }
       link1->next=start;
       printf("\nnode deleted %d\t",link->data);
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
    printf("\nEnter the position where you want to delete");
    scanf("\t%d",&n);
    for(int i=0;i<n;i++)
    {
        link1=link;
        link=link->next;
    }
    link1->next=link->next;
    printf("\n ITem deleted is%d \t",link->data);
    free(link);
    display();
}
struct node *circular_sort()
{
 printf("\nSORTED LINKLIST\n");
struct node *q,*p;
q=start;
int data;
while(q->next!=start)
{
p=q->next;
while(p->next!=start)
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
    printf("\nreversed circular linklist");
    struct node *prev, *link, *last,*cur;

    
    if (link == NULL)
    {
        printf("\nCannot reverse empty list.\n");
        return;
    }


    
    last = start;

    prev  = start;
    cur   = start->next;
    start= start->next;

    while (start != last)
    {
        start = start->next;
        cur->next = prev;

        prev = cur;
        cur  = start;
    }

    cur->next = prev;
    start = prev;
    printf("\nREVERSED CIRCULAR LINKLIST IS");
    display();
}
struct node *display()
{
    printf("\ndisplay of circular linklist\n");
	struct node *link=start;
	if(link==NULL)
	{
		printf("\nLIST EMPTY");
	}
	do {
            printf("%d  ",link->data);
            link= link->next; 
       }
	   while(link!=start);
	 
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
	circular_sort();
    reverse_list();
	return 0;
	
}
