//Use of functions for Math nCr formula(Improved)
#include<iostream>
using namespace std;

int fac(int input);  //Body of function can be defined later as well
int main()           //but naming of function at the starting is very
{                    //important
    cout<<"To print Pascal's Triangle:"<<endl;
    cout<<"Enter size of Triangle:";
    int size;
    cin>>size;
    for(int row=0;row<size;row++)
    {
        for(int column=0;column<=row;column++)
        {
            cout<<fac(row)/(fac(column)*fac(row-column))<<" ";//nCr= (row)C(column)
        }
        cout<<endl;
    }
    return 0;
}

int fac(int input)  //Factorial function
{   
    int prod;
    if(input<1)  //Shortcut method to define 0!
    {
      prod=1;
    }
    else
    {
        prod=input;
        for(int i=1;i<input;i++)
        {
            prod*=i;
        }
    }
    return prod;
}
