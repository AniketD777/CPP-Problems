// To calculate 'a' to the power 'b' ie. a^b
#include<iostream>
using namespace std;

void pow(int a, int b)
{
   int res=1;
   while(b>0)
   {
      if((b&1)!=0) //ie. if 'b' is odd
      {
        res=res*a;
      }
      a=a*a;
      b=b>>1;//(BitManu==> Ie. divided by 2)
   }
   cout<<res<<endl;
}

int main()
{
    cout<<"To calculate 'a' to the power 'b' ie. a^b"<<endl;
    int a,b;
    cout<<"Enter a: "; 
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    pow(a,b);

  return 0;
}
