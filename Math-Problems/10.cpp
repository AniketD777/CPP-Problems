//Binary to decimal conversion
#include<iostream>
using namespace std;

int deci(int bi)  //Function for bi to deci conversion
{
    int sum=0;
    int powOf2=1;
    while(bi>0)
    {
      int lasDig=bi%10;
      if(lasDig<2)
      {
        sum+=lasDig*powOf2;
        powOf2*=2;
        bi/=10;
      }
      else
      {
        sum=0;
        break;
      }
      
    }
    return sum;
}

int main()
{
    int bi;
    cout<<"Enter Binary:";
    cin>>bi;
    cout<<"Binary in Decimal form is: "<<deci(bi)<<endl;
    
  return 0;
}
