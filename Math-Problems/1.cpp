//Check prime or non-prime.
#include<iostream>
using namespace std;

int main()
{
    cout<<"Check Prime/Non-Prime:"<<endl;
    cout<<"Enter Number:";
    int num;
    cin>>num;
    int i;
    bool flag=0;
    for(i=2;i<num;i++)
    {
     if(num%i==0)
     {
      cout<<"Non-Prime"<<endl;
      flag=1;
      break;
     }
     
    }
    
    if(flag==0)
    {
      cout<<"Prime";
    }
    
  return 0;
}
