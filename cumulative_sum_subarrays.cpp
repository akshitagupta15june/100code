#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    int l=-1;
    int r=-1;
    int max=0;
    int curs=0;
    int a[1000];
    int csum[1000]={0};
    cin>>a[0];
    csum[0]=a[0];
    for ( i=1;i<n;i++)
    {
        cin>>a[i];
        csum[i]=csum[i-1]+a[i];
    }
    for( i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            curs=csum[j]-csum[i-1];
            
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
