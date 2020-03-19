#include <stdio.h>
#define n 5
int top=-1;
int stack[n];
void push()
{
    int item;
    printf("\n Enter data to be entered in stack");
    scanf("%d",&item);
    if(top==n-1)
    {
        printf("\n Stack Overflow");
    }
    else
    {
       top++;
       stack[top]=item;
    }
}
void pop()
{
    int temp;
    temp=stack[top];
    top--;
    printf("Item deleted is %d",temp);
}
void peek()
{
    int temp;
    temp=stack[top];
    printf("%d",temp);
    
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
}
int main()
{
    int ch;
    
    do
    {
        printf("Enter\n1:push\n2:pop\n3:peek\n4:display\n5:(0) to exit\t");
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
