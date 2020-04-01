#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
struct node *temp;
struct node *create();
struct node *insertion(struct node *temp,struct node *root);
struct node *deletion(struct node *root,int data);
struct node *inorder_succesor(struct node *root);
struct node *display(struct node *root);

struct node *create()
{
    struct node *new;
    printf("\nEnter the data of new node\t");
    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
	new->left=new->right=NULL;
	return new;
}
struct node *insertion(struct node *temp,struct node *root)
{
   if(temp->data<root->data)
	{
		if(root->left!=NULL)
			insertion(temp,root->left);
		else
			root->left=temp;
	}
	
	if(temp->data>root->data)
	{
		if(root->right!=NULL)
			insertion(temp,root->right);
		else
			root->right=temp;
	}
}
struct node *display(struct node *root)
{
    	if(root!=NULL)
	{
		printf("%d ",root->data);
		display(root->left);
		display(root->right);
	}

}
struct node *deletion(struct node *root,int data)
{
    	if(root==NULL)
	{
		return root;
	}
	//no child
	else if(root->left==NULL && root->right==NULL)
	{
		free(root);
		root=NULL;
	}
	else if(data<root->data)
	{
		root->left=deletion(root->left,data);
	}
	else if(data>root->data)
	{
		root->right=deletion(root->right,data);
	}
	else
	{
		
		//one child
		if(root->left==NULL)
		{
			struct node *temp=root;
			root=root->right;
			free(temp);
		}
		else if(root->right==NULL)
		{
		   struct node *temp=root;
			root=root->left;
			free(temp);	
		}
		else
		{
		
		temp=inorder_succesor(root->right);
			root->data=temp->data;
			root->right=deletion(root->right,temp->data);
		}
	}

	return root;
}
struct node *inorder_succesor(struct node *root)
{
    while(root->left!=NULL)
	{
		root=root->left;
		return root;
	}
}

int main()
{
  char ch;
	int dat;
	
	do
	{
		temp=create();
		if(root==NULL)
			root=temp;
		else	
			insertion(temp,root);
			
		printf("\nDo you want to enter more(y/n)?");
		getchar();
		scanf("%c",&ch);
	}while(ch=='y'|ch=='Y');
  display(root);
  printf("Enter data you want to delete\t");
  scanf("%d",&dat);
  root=deletion(root,dat);
  printf("Elements after deletion \t");
  display(root);
  
  return 0;
  
}
