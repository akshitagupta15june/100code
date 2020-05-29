#include <iostream>
#include<cstring>
#include<string>
using namespace std;
int stringtoint(char *a,int n)
{
    if(n==0)
    {
        return 0;
    }
    int d=a[n-1]-'0';
    int small_ans = stringtoint(a,n-1);
    return small_ans* 10+d;
}
int main(int argc, char **argv)
{
	char a[]="1234";
    int len=strlen(a);
    int x=stringtoint(a,len);
    cout<<x<<endl;
    cout<<x+1<<endl;
	return 0;
}
