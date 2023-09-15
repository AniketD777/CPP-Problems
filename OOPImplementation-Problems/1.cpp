//Pointer and dereference(->) concept
#include<iostream>
using namespace std;

class rectangle
{
   int length;
   int breadth;
   public:
   void inputLength(int l);
   void inputBreadth(int b);
   void peri()
   {
       cout<<"Perimeter is: "<<2*(length+breadth)<<endl;
   }
   void area()
   {
       cout<<"Area is: "<<length*breadth<<endl;
   }
};

void rectangle::inputLength(int l)
{
    length=l;
}
void rectangle::inputBreadth(int b)
{
    breadth=b;
}

int main()
{
    //This is for static allocation ie. within stack
    rectangle r1;
    rectangle *ptr;//Pointer
    ptr=&r1;
    ptr->inputLength(10);//That's how we dereference(->)
    ptr->inputBreadth(5);
    ptr->peri();
    ptr->area();
    //dimension of r1 set as ptr is pointing at address of r1
    //so, whatever we put it for ptr, it also gets changed for r1
    r1.peri();
    r1.area();

    
    //This is for dynamic allocation ie. within heap
    rectangle *ptr2=new rectangle;
    ptr2=&r1;//Pointing at this address
    ptr2->inputLength(3);
    ptr2->inputBreadth(2);
    ptr2->peri();
    ptr2->area();
    r1.peri();
    r1.area();

    return 0;
}
