//Decimal to octal 
#include<iostream>
using namespace std;

int deciTOoct(int deci)
{
    int powOf8=1;
    while(deci>=powOf8)
    {
        powOf8*=8;
    }
    powOf8/=8;
    int lasdig=0;
    int oct=0;
    while(powOf8>0)
    {
        lasdig=deci/powOf8;
        oct=(oct*10)+lasdig;
        deci-=lasdig*powOf8;
        powOf8/=8;
    }
   
    return oct;
}

int main()
{
    cout<<"Enter Decimal number: ";
    int deci;
    cin>>deci;
    cout<<deciTOoct(deci);
    return 0;
}
