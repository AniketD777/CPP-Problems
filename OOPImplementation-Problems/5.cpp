//Friends function
//(Find the sum of two complex numbers)

#include<iostream>
using namespace std;

class complex
{
   int a,b;//To represent a+bi
   public:
   void setNum(int a,int b)
   {
      this->a=a; //using keyword 'this' as we took same name 
      this->b=b; 
   }
   
   friend complex sumComplex(complex c1,complex c2);
   //Here we are giving data member access to a function ie. by making
   //it a friend function 
   
   void print()
   {
       cout<<a<<"+"<<b<<"i"<<endl;
   }
};

complex sumComplex(complex c1,complex c2)
{
    complex sum;
    sum.setNum((c1.a+c2.a),(c1.b+c2.b));
    return sum;
}

int main()
{
    complex c1,c2,sum;
    c1.setNum(1,2);
    c2.setNum(1,1);
    sum=sumComplex(c1,c2);
    cout<<"Sum of both complexes is: ";
    sum.print();
    return 0;
}
