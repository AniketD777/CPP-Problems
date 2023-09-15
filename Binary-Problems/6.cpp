//To print subsets of an array
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int size;
    char arr[size];
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter value for: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<i<<": ";
        cin>>arr[i];
    }
    for(int i=0;i<(1<<size);i++)//1<<size means 2^size
    {
        for(int j=0;j<size;j++)
        {
            if(i&(1<<j))//if '&' is true ie. result is 1 then only enters if statement
            {
                cout<<arr[j];
            }
        }
        cout<<endl;
    }

    return 0;
}
