//Sum of all subarrays
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size of array: ";
    int size;
    cin>>size;
    cout<<"Enter value for position:\n";
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<i<<": ";
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        int sum=0;
        for(int j=i;j<size;j++)
        {
            sum+=arr[j];
            cout<<sum<<" ";
        }
    }
    
    return 0;
}
