// To convert decimal to binary
#include<iostream>
using namespace std;

double deciTObi(int deci)  //Function
{
 
  int powOf2=1;
  while(powOf2<=deci)
  {
  powOf2*=2;
  }
  powOf2=powOf2/2;  //Because uski power ek zyada ho gai hai as wo loop me se value pass hui
                    //So, To to decrease one power
  int sum=0;
  while(powOf2>0)
   {
    int lasdig=deci/powOf2;
    sum=(sum*10)+lasdig;
    deci-=lasdig*powOf2;
    powOf2/=2;
   }
  return sum;
}

int main()  //Main function
{
   cout<<"To convert decimal to binary:\n";
   cout<<"Enter decimal number: ";
   int deci;
   cin>>deci;
   cout<<"Binary is: "<<deciTObi(deci)<<endl;

   return 0;
}
