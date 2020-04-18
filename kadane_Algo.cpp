#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,j;
    int mx=0;
    int csum=0;
    int a[1000];
    cin>>n;
   
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(j=0;j<n;j++)
    {
        csum=csum+a[j];
        if(csum<0)
        {
            csum=0;
        }
        mx=max(csum,mx);
    }
   
    cout<<"maximum sum is"<<mx;
	return 0;
}
