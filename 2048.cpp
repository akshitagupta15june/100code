#include <iostream>
using namespace std;
char words[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void printspelling(int n)
{
    if(n==0)
    {
        return;
    }
    printspelling(n/10);
    int d=n%10;
    cout<<words[d]<<" ";
}
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    printspelling(n);
	return 0;
}
