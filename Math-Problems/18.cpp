//Set Theory Problem)(Terms in a given range divisble by 5 or 7)
#include<iostream>
using namespace  std;

int only5(int a, int b)
{
    int freq=0;
    for(int i=a;i<=b;i++)
    {
        if((i%5)==0)
        {
            freq++;
        }
    }
    return freq;
}

int only7(int a, int b)
{
    int freq=0;
    for(int i=a;i<=b;i++)
    {
        if((i%7)==0)
        {
            freq++;
        }
    }
    return freq;
}

int both5and7(int a, int b) //Intersection (inverted U)
{
    int freq=0;
    for(int i=a;i<=b;i++)
    {
        if((i%5)==0 && (i%7)==0)
        {
            freq++;
        }
    }
    return freq;
}

int main()
{
    int result;
    cout<<"Enter Range"<<endl;
    int a,b;
    cout<<"From: ";
    cin>>a;
    cout<<"To: ";
    cin>>b;
    result=only5(a,b)+only7(a,b)-both5and7(a,b);//Formula
    cout<<"Numbers of terms between "<<a<<" and "<<b<<
    " divisble by 5 or 7 is: ";
    cout<<result<<endl;

  return 0;
} 

