//To search linearly in Array
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter no. of elements: ";
    int size;
    cin>>size; 
    int arr[size];
    for(int i=0;i<size;i++) //For input
    {
        cout<<"Enter element "<<i<<": ";
        cin>>arr[i];
    }
    cout<<"Enter Key to search for: ";
    int key;
    cin>>key;
    int i;
    
    for(i=0;i<size;i++)  //For search
    {
        if(arr[i]==key)
        {
            cout<<"Key Valid!"<<endl;
            break;
        }
    }
    if(arr[i]!=key)
    {
    cout<<"Key Invalid!"<<endl;
    }
    return 0;
}
