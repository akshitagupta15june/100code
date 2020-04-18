#include<iostream>
using namespace std;
int main()
{
    int a[]={0,1,2,5,7,8,9,15,19};
    int s=9;
    int i=0;
    int j=sizeof(a)/sizeof(int)-1;
    while(i<j)
    {
        int csum=a[i]+a[j];
        if(csum>s)
        {
            j--;
        }
        else if(csum<s)
        {
            i++;
        }
        else if(csum==s)
        {
            cout<<a[i]<<","<<a[j]<<endl;
            i++;
            j--;
        }
    }
    
    return 0;
    
}
