#include <stdio.h>
#define n 5
int top1=-1;
int top2=-1;
int stack1[n];
int stack2[n];
int c=0;
void push1(int data)
{
    if(top1==n-1)
    {
        printf("\n Stack Overflow");
    }
    else
    {
       top1++;
       stack1[top1]=data;
    }
}
void push2(int item)
{
    
    if(top2==n-1)
    {
        printf("\n Stack Overflow");
    }
    else
    {
       top2++;
       stack2[top2]=item;
    }
}
int pop1()
{
    return stack1[top1--];
}
int pop2()
{
    return stack2[top2--];
}
void enqueue()
{
    int data;
    printf("\nEnter data ");
    scanf("%d ",&data);
    push1(data);
    c++;
}
void dequeue()
{
    int i,a,b;
    if(top1==-1 && top2==-1)
    {
        printf("\n QUEUE IS EMPLTY");
    }
    else
    {
       for(i=0;i<c;i++)
       {
           a=pop1();
           push2(a);
       } 
       b=pop2();
       printf("\n The dequeued element is %d ",b);
       c--;
       for(i=0;i<c;i++)
       {
           a=pop2();
           push1(a);
       }
    }
}
void display()
{
    for(int i=0;i<=top1;i++)
    {
        printf("\n%d",stack1[i]);
    }
}
int main()
{
    int ch;
    
    do
    {
        printf("Enter\n1:enqueue\n2:dequeue\n3:display\n4:(0) to exit\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            enqueue();
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

}
