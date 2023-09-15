//To print prime numbers in interval using sieve of eratosthenes algorithm
#include<iostream>
using namespace std;

void primeSieve(int upto)
{
   int prime[1000]={0};
    for(int i=2;i<=upto;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=upto;j=j+i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=upto;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }

}

int main()
{ 
    int upto;
    cout<<"Enter upto which primes are to be known: ";
    cin>>upto;

    primeSieve(upto);
    
    return 0;
}
