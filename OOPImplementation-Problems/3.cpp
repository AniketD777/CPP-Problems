//Constructor types
#include<iostream>
using namespace std;

class rectangle
{
    int length;
    int breadth;
    public:
    
    /*rectangle()//Default constructor
    {
        cout<<length<<" & "<<breadth<<endl;
    }       Outputs 0 & 0        */
    
    rectangle()//Non-Parametrized constructor
    {
       length=10;
       breadth=5;
       cout<<length<<" & "<<breadth<<endl;
    }
    
    rectangle(int l,int b)//Parametrized constructor
    {
       length=l;
       breadth=b;
       cout<<length<<" & "<<breadth<<endl;
    }

    rectangle(rectangle &r)//Copy Constructor
    {
        cout<<r.length<<" & "<<r.breadth;
    }

};

int main()
{
    rectangle r1;//Note dont put () if is a default or 
                 //a non paramet. constructor
    
    rectangle r2(6,3); //For parametrized constructor
    
    rectangle r3(r1); //For copy constructor

    return 0;
}
