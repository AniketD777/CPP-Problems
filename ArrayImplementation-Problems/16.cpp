//Best Time to buy and sell stock to maximise profit
#include<iostream>
using namespace std;

void MaxProfit(int arr[],int sizeOfArr)
{
    int min=arr[0];
    int max=0;
    for(int i=1;i<sizeOfArr;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            if(max==0)
            {
                max=arr[0];
            }
        }
        if(arr[i]>max)
        {
            max=arr[i];
            continue;
        }
    }
    int Maxprof=max-min;
    cout<<"Profit: "<<Maxprof;
}

int main()
{
    int arr[]={3,5,8,7};
    int sizeOfArr=(sizeof(arr)/sizeof(arr[0]));
    MaxProfit(arr,sizeOfArr);
    return 0;
}
