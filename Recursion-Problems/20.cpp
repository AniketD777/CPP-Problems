//No. of ways to pair or keep single the individuals
#include<iostream>
using namespace std;

int party(int n)
{
    if(n==0 || n==1 || n==2)
    {
        return n;
    }
    return party(n-1) + party(n-1)*(n-2);
}        //For single   //For combination of pairing

int main()
{
    cout<<party(3);
    return 0;
}
