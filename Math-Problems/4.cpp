// To print prime no. between a and b
#include<iostream>
using namespace std;
bool prime(int num) //num default hota hai, ie. function me likhana 
{                   // zaroori hai
  for(int i=2;i<num;i++)
  {
      if(num%i==0)
      {
          return false; //No need for break, return hoke bhar nikal jaega 
      }                 //bool ke curly braces se.
  }
  return true;
}

int main()
{
    cout<<"To print prime no. between a and b:"<<endl;
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    for(int i=a;i<=b;i++)
    {
     if(prime(i))
     {
       cout<<i<<endl;
     }
    }
    return 0;
}
