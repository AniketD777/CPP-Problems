//Print Fibonacci series
#include<iostream>
using namespace std;

int fibo(int n)   //fibo function to define the loop for fibonacci series
{                 //which can be globally accessed in main function
   int first=0;
   int second=1;
   int sum;
   for(int i=1;i<=n;i++)
   {
     cout<<first<<endl;
     sum=first+second;
     first=second;
     second=sum;
   }
   return 0;
}

int main()         //main function
{
    cout<<"Print Fibonacci series upto:"<<endl;
    cout<<"Enter no. of terms:";
    int terms;       
    cin>>terms;
    fibo(terms);
 
 return 0;
}
