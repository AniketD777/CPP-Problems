// To check is it an armstrong number
#include<iostream>
#include<math.h> //Package used to carry out the mathematic functions
using namespace std;

int main()
{
    cout<<"To check is it an armstrong number:"<<endl;
    cout<<"Enter no. to check:";
    int num;
    cin>>num;
    int originalnum=num; //This needs to be written after cin such that it stores the num value
    int sum=0;           //but agar cin se pehle likha toh num ki resultant value after looping
    while(num>0)         //jo 0 hogi finally yaha wo store ho jaegi.
    {
        int lasdig=num%10;
        sum+=pow(lasdig,3); //#syntax:        pow(numberORvariable,power to be calc.); 
        num=num/10;
    }
    if(sum==originalnum)
    {
        cout<<"Yes it is an Armstrong no.";
    }
    else
    {
        cout<<"It's not";
    }

    return 0;
}
