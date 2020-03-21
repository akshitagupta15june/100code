#include <stdio.h>
# define n 5
int queue[n];
int f=-1;
int r=-1;
void enqueuefront(int x)
{
    if((f==0 && r==n-1)||(f=r+1))
    {
        printf("QUEUE IS FULL");
    }
    else if(f==-1 &&r==-1)
    {
        f=0;
        r=0;
        queue[f]=x;
    }
    else if(f==0)
    {
        f=n-1;
        queue[f]=x;
    }
    else
    {
        f--;
        queue[f]=x;
    }
    
}
void enqueuerear(int x)
{
    if((f==0 && r==n-1)||(f=r+1))
    {
        printf("QUEUE IS FULL");
    }
    else if(f==-1 &&r==-1)
    {
        f=0;
        r=0;
        queue[r]=x;
    }
    else if(r==n-1)
    {
        r=0;
        queue[r]=x;
    }
    else
    {
        r++;
        queue[r]=x;
    }
    
}
void display()
{
    int i=f;
    while(i!=r)
    {
        printf("\n%d ",queue[i]);
        i=(i+1)%n;
    }
    printf("\n%d",queue[r]);
}
void getfront()
{
    printf(" %d ",queue[f]);
}
void getrear()
{
    printf(" %d ",queue[r]);
}
void dequeuefront()
{
    if(f==-1 && r==-1)
    {
        printf("\n QUEUE IS EMPTY");
    }
    else if(f==r)
    {
        f=r=0;
    }
    else if(f==n-1)
    {
        printf(" %d",queue[f]);
        f=0;
    }
    else
    {
        printf(" %d",queue[f]);
        f++;
    }
}
void dequeuerear()
{
    if(f==-1 && r==-1)
    {
        printf("\n QUEUE IS EMPTY");
    }
    else if(f==r)
    {
        f=r=-1;
    }
    else if(r==0)
    {
        printf(" %d",queue[r]);
        r=n-1;
    }
    else
    {
        printf(" %d",queue[r]);
        r--;
    }
}
int main()
{
    int ch,data;
    
    do
    {
        printf("\nEnter following keys\n1:ENQUEUE FROM FRONT\n2:DEQUEUE FROM FRONT\n3:ENQUEUE FROM REAR\n4:DEQUEUE FROM REAR\n5:GET FRONT\n6: GET REAR\n7:DISPLAY\n8: (0) for exit press\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter data\t ");
            scanf("%d ",&data);
            enqueuefront(data);
            break;
            case 2:
            dequeuefront();
            break;
            case 3:
            printf("\nEnter data\t ");
            scanf("%d ",&data);
            enqueuerear(data);
            break;
            case 4:
            dequeuerear();
            break;
            case 5:
            getfront();
            break;
            case 6:
            getrear();
            break;
            case 7:
            display();
            break;
            default:
            printf("\nwrong choice");
        }
    }
        while(ch!=0);
        ch=getchar();
}

