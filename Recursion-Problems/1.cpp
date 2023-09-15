//Sum of n terms using Recursion
#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n + sum(n-1);
}

int main() 
{
    int n;
    cout<<"Enter term upto which to calculate sum: ";
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
} 
