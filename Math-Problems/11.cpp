//Octal to decimal conversion
#include<iostream>
using namespace std;

int deci(int oct)  //Function for oct to deci conversion
{
    int sum=0;     //Don't define inside loop warna ye value assign 
    int powOf8=1;  //hojaegi baar baar jb loop chlega
    while(oct>0)
    {
       int lasdig=oct%10;
       sum+=lasdig*powOf8;
       powOf8*=8;  //For increasing finding power of 8
       oct/=10;
    }
   return sum;
}

int main()
{
    cout<<"Oct to Decimal conversion:\n";
    cout<<"Enter Octal number: ";
    int oct;
    cin>>oct;
    cout<<"In decimal form is: "<<deci(oct)<<endl;
    return 0;
}
