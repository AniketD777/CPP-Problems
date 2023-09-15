//To print nth fibonnacci no.
#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0) //Indexing starts from '0'
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main()
{
    cout<<"Enter upto which to calculate: ";
    int n;
    cin>>n;

    cout<<fib(n);
    return 0;
}
