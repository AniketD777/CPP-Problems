//Area of Largest Rectangle possible(Brute Force Approach)
//Time Complexity => O(n^2)
#include<iostream>
using namespace std;

int LargestRectArea(int arr[],int sizeOfArr)
{
    int maxArea=0;
    for(int i=0;i<sizeOfArr;i++)
    {
        int k=i;
        int lengthCount=0;
        while(arr[i]<=arr[k] && k>=0)//For Backward traversing
        {  //K>=0 because k cannot be -1 as 0 is upto which we need to check
           //also because k=-1 has some garbage value
            lengthCount++;
            k--;
        }
        k=i+1; //Because k=i aleady included above
        while(arr[i]<=arr[k] && k<sizeOfArr)
        {//k<sizeOfArr because last element is upto which we check
         //also because k=sizeOfArr has some garbage value stored
            lengthCount++;
            k++;
        }
        if(maxArea<(arr[i]*lengthCount))
        {
            maxArea=(arr[i]*lengthCount);
        }
    }
    return maxArea;
}

int main()
{
    int arr[]={1,2,3};
    int sizeOfArr=sizeof(arr)/sizeof(arr[0]);
    cout<<"Area of largest rectangle possible is: "<<LargestRectArea(arr,sizeOfArr)<<endl;
    return 0;
}
