//To print inverted pyramid
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size of pyramid: ";
    int size;
    cin>>size;
    
     for(int i=size-1;i>=0;i--)
     {
        for(int j=0;j<=i;j++)
         {
            cout<<"* ";
         }
        cout<<endl;
     }
    
    return  0;
}
