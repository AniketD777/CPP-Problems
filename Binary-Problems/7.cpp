//To find the unpaired element present(only for 1 single element)(Eg.[1,1,2,2,3])
#include<iostream>
using namespace std;

int find(int arr[], int size)
{
   int ans=0;
    for(int i=0;i<size;i++)
    {
      ans=(ans^arr[i]);//Take any example and check the algorithm does finds the single 
    }                    //element(memorise this)
    return ans;
}

int main()
{
    int size;
    cout<<"Enter size of input array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter element for the position: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<i<<": ";
        cin>>arr[i];
    }
    cout<<find(arr,size)<<endl;
    
    return 0;
}
