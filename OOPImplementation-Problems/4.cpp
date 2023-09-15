//Types of functions 
#include<iostream>
using namespace std;

class rectangle
{
    int length,breadth;
    public:
    
    //Constructor functions
    /*rectangle();
    rectangle(int l,int b);
    rectangle(rectangle &r);*/

    //Mutator functions
    void setlength(int l);
    void setbreadth(int b);

    //Accessor functions
    void getlength();
    void getbreadth();
    
    //Facilitator functions
    void perimeter();
    void area();

    //Enquiry functions
    void isSquare();

    //Destructor functions
    //~rectangle();

};

//Scope resolution ie. defining class functions outside the class
void rectangle::setlength(int l)
{   
    length=l;
}
void rectangle::setbreadth(int b)
{   
    breadth=b;
}
void rectangle::getlength()
{
    cout<<length<<" & ";
}
void rectangle::getbreadth()
{
    cout<<breadth<<endl;
}
void rectangle::perimeter()
{
    int peri=2*(length+breadth);
    cout<<"Perimeter: "<<peri<<" & ";
}
void rectangle::area()
{
    int ar=length*breadth;
    cout<<"Area: "<<ar<<endl;
}
void rectangle::isSquare()
{
    if(length==breadth)
    {
        cout<<"Is a square!";
        return;
    }
    cout<<"Not a square!";
}


int main()
{
    rectangle r;
    r.setlength(5);
    r.setbreadth(10);
    r.getlength();
    r.getbreadth();
    r.perimeter();
    r.area();
    r.isSquare();

    return 0;
}
