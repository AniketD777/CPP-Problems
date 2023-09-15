//To print the maximum as compared to the previous enteries
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size of array: ";
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter value for position:\n";
    for(int i=0;i<size;i++)
    {
        cout<<i<<": ";
        cin>>arr[i];
    }
    int temp=arr[0];
    cout<<temp<<" ";
    for(int i=1;i<size;i++)
    {
        if(temp>=arr[i])
        {
            cout<<temp<<" ";
        }
        else if(temp<arr[i])
        {
            temp=arr[i];
            cout<<temp<<" ";
        }
    }
    return 0;
}
