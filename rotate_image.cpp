#include <iostream>
#include<algorithm>
using namespace std;
void rotate_image(int a[][1000],int n)
{
    for(int i=0;i<n;i++)
    {
        int sc=0;
        int ec=n-1;
        while(sc<ec)
        {
            swap(a[i][sc],a[i][ec]);
            sc++;
            ec--;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                swap(a[i][j],a[j][i]);
            }
        }
    }
}
void display(int a[][1000],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
	int a[1000][1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    rotate_image(a,n);
    display(a,n);
	return 0;
}
