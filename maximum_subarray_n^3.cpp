#include <iostream>
using namespace std;

int main()
{
    int i,j,k,n;
    cin>>n;
    int l=-1;
    int r=-1;
    int max=0;
    int curs=0;
    int a[1000];
    for ( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for( i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            curs=0;
            for(k=i;k<=j;k++)
            {
                curs+=a[k];
                
            }
            if(curs>max)
            {
                max=curs;
                l=i;
                r=j;
            }
        }
        
    }
    for(int k=l;k<=r;k++)
    {
        cout<<a[k]<<",";
    }
    cout<<"maximum sum is"<<max;
    
	
	return 0;
}
