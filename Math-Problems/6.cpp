// Print Factorial of a Number
#include<iostream>
using namespace std;

int fac(int n)  
{
    int prod=n;   //This factorial method doesn't work for => 0! (Refer 6.2.5)
    for(int i=1;i<n;i++)
    {
       prod*=i; //Also can be -->  prod=prod*i
    }
    return prod;  //For returning final value of prod to the main function
}

int main()
{
    cout<<"Print Factorial of a Number:"<<endl;
    cout<<"Enter No. :";
    int num;
    cin>>num;
    int factorial =fac(num);
    cout<<factorial;
  
  return 0;
}
