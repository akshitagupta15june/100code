#include <iostream>
using namespace std;
int last_occur(int *a,int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    int i=last_occur(a+1,n-1,key);
    if(i==-1)
    {
        if(a[0]==key)
        {
            return 0;
        }
        else{
            return -1;
        }
    }
   return i+1;
}

int main(int argc, char **argv)
{
	int arr[]={1,2,3,7,4,5,6,7,10};
    int key=7;
    int n=sizeof(arr)/sizeof(int);
    cout<<last_occur(arr,n,key)<<endl;
   // cout<<linearsearch(arr,0,n,key);
	return 0;
}
