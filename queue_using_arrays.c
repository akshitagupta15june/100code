#include<stdio.h>
#define n 5
int queue[n];
int f=-1;
int r=-1;
void enqueue(int data)
{
    
    if(r==n-1)
    {
        printf("\nQUEUE OVERFLOW");
    }
    else if(f==-1 && r==-1)
    {
      f=r=0;
      queue[r]=data;
    }
    else
    {
      r++;
      queue[r]=data; 
    }
}
void dequeue()
{
    
    if(f==-1 && r==-1)
    {
        printf("\nQUEUE UNDERFLOW");
    }
    else if(f==r)
    {
        f=r=-1;
    }
    else
    {
        printf("\nItem deleted is %d ",queue[f]);
        f++;
        
    }
}
void peek()
{
    if(f==-1 && r==-1)
    {
        printf("\nNothing to display");
    }
    else
    {
        printf("\nPEAK VALUE IS  %d ",queue[f]);
    }
}
void display()
{
    if(f==-1 && r==-1)
    {
        printf("\nNothing to display");
    }
    for(int i=f;i<=r;i++)
    {
        printf("%d ",queue[i]);
    }
}
int main()
{
    int ch,data;
    clrscr();
    do
    {
        printf("\nEnter following keys\n1:ENQUEUE\n2:DEQUEUE\n3:peek\n4:display\n5:(0) to exit\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter data\t ");
            scanf("%d ",&data);
            enqueue(data);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            peek();
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

