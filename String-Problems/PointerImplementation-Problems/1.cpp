//To alter or swap the values of variables by passing address of variables to functions
#include <iostream> //Generally we can only pass values of variables to functions
using namespace std; //So, to avoid this problem we use pointers.

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    cout<<"Two swap two numbers in stored variables a and b: "<<endl;
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Initially:\n";
    cout<<a<<" "<<b<<endl;
    /*int *aptr=&a;
    int *bptr=&b;               //We can shorten the program by .....
    swap(*aptr,*bptr);*/
       //OR
    swap(&a,&b);   //With this we can avoid declaring the pointer variables ie. aptr
    cout<<"Finally:\n"; //and bptr
    cout<<a<<" "<<b;
    return 0;
}
