#include<iostream>
using namespace std;
int main() {
    char ch;
    int a,b,c;
    cin>>ch;
    
    while(ch!='X'&&ch!='x')
    {
        
        switch(ch)
        {
          case '+': {cin>>a>>b;  
                      c=a+b;
                       cout<<c<<endl;
                      break;}
            
          case '-': {cin>>a>>b;  
                      c=a-b;
                       cout<<c<<endl;
                      break;}
          case '*': {cin>>a>>b;  
                      
                      c=a*b;
                       cout<<c<<endl;
                      break;}
          case '/': {cin>>a>>b;
                      c=a/b;
                      cout<<c<<endl;
                      break;}
          case '%': {cin>>a>>b;  
                      c=a%b;
                      cout<<c<<endl;
                      break;}
        
          default : 
                     cout<<"Invalid operation. Try again."<<endl ;
                     break;                    
        }
        cin>>ch;
    }
    
        
    
  

}
