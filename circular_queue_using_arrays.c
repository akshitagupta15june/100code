#include<stdio.h>
#define n 10
int queue[n];
int f=-1;
int r=-1;
void enqueue(int data)
{
    
    if((r+1)%n==f)
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
      r=(r+1)%n;
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
        f=(f+1)%n;
        
    }
}
void peak()
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
    int i=f;
    if(f==-1 && r==-1)
    {
        printf("\nNothing to display");
    }
    else
    {
       while(i!=r)
    {
        printf("\n%d \n",queue[i]);
        i=(i+1)%n;
    } 
    }
    
}
int main()
{
    int ch,data;
    do
    {
        printf("\nEnter following keys\n1:ENQUEUE\n2:DEQUEUE\n3:PEAK\n4:display\n5:(0) to exit\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter data\n");
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
}
