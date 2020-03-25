#include <stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
struct node *create();
struct node *predisplay();
struct node *create()
{
    int dat;
    struct node *newnode;
    printf("\nENTER DATA AND ENTER (-1) FOR NO NODE\t");
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&dat);
    if(dat==-1)
    {
        return NULL;
    }
    
    newnode->data=dat;
    printf("\n Enter the data of left node of %d\t",dat);
    newnode->left=create();
    printf("\n Enter the data of right node of %d\t",dat);
    newnode->right=create();
    return newnode;
    
    
}
struct node *predisplay(struct node *roo)
{
    if(roo==NULL)
    {
        return NULL;
    }
    printf(" %d ",roo->data);
    predisplay(roo->left);
    predisplay(roo->right);
}
int main()
{
    printf("\nBINARY TREE ");
    root=create();
    predisplay(root);
    return 0;
}
