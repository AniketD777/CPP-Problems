//Three sum (Two pointers)
//*Note:- goto used first time within this one
#include<iostream>
#include<vector>
using namespace std;

vector<int> sort(vector<int> arr) //For sorting array in increasing order
{
    vector<int> sortedArr=arr;
    for(int j=sortedArr.size()-1;j>=0;j--)
    {
        for(int i=0;i<=j;i++)
        {
            if(sortedArr[i]>sortedArr[i+1])
            {
               int temp=sortedArr[i];
               sortedArr[i]=sortedArr[i+1];
               sortedArr[i+1]=temp;
            }
        }
    }
    return sortedArr;
}

int main()
{
    vector<int> arr={12,3,7,1,6,9};
    int target=24;
    vector<int> sortedArr=sort(arr);

    for(int i=0;i<sortedArr.size();i++)
    {
        int low=i+1;
        int high=sortedArr.size()-1;
        while(low<high)
        {
            if(target==sortedArr[i]+sortedArr[low]+sortedArr[high])
            {
                cout<<"True";
                goto outside;
            }
            else if(target>sortedArr[i]+sortedArr[low]+sortedArr[high])
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }
    cout<<"False";
    outside: //If true, control will come directly here for execution
    
    return 0;
}
