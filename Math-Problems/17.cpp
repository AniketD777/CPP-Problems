//To find prime factors
#include<iostream>
using namespace std;

int SPF(int n)//SPF smallest prime factor
{
    //using sieve method
    int spf[1000]={0};
    for(int i=2;i<=n;i++)
    {
        spf[i]=i;
    }
    
    for(int i=2;i<=n;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                if(spf[j]==j)
                {
                  spf[j]=i;
                }
            }   
        }
    }
    return spf[n];
}
      //OR
/*int SPF(int n)
{
   int i;
   for(i=2;i<=n;i++)
   {
       if(n%i==0)
       {
           break;
       }
   }
   return i;
}*/

void PrimeFac(int num)
{
   while(num!=1)
   {
       cout<<SPF(num)<<" ";
       num/=SPF(num);
   }
}

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    PrimeFac(num);
    cout<<endl;
    return 0;
}
