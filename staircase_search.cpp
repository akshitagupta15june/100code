#include <iostream>
using namespace std;
int search(int a[][1000],int n,int item)
{
    int i,j;
    int found=1;
    
        for (i=0, j=n-1; i<n ,j>0; i++, j--)
        {
            if(item>a[i][j])
            {
                i++;
            }
            else if(item==a[i][j])
            {
                 found=0;
                 break;
            }
            else
            {
                j--;
            }
        }
        
    
    if(found==0)
    {
        cout<<"Item found at position";
    }
    else{
        cout<<"Item not found";
    }
}


int main()
{
    int a[1000][1000];
    int n,item;
    cin>>n;
    cin>>item;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    search(a,n,item);
	return 0;
}
