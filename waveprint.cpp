#include <iostream>
using namespace std;
int main()
{
    int a[20][30];
	int m,n;
    int val=1;
    cin>>m;
    cin>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=val;
            val+=1;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int j=0;j<n;j++)
    {
        //bottom to top
       if(j%2==0)
       {
           for(int i=0;i<m;i++)
           {
               cout<<a[i][j]<<" ";
           }
       }
       //top to bottom
       else{
           for(int i=m-1;i>=0;i--)
           {
               cout<<a[i][j]<<" ";
           }
       }
    }
    
	return 0;
}
