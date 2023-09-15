//Max consecutive 1's (By interchanging 'k' no. of zeroes in given array)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr={0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k=3;
    int left=0;
    int maxi=0;
    int zeroCount=0;
    
    for(int right=0;right<arr.size();right++)
    {
        if(arr[right]==0)
        {
            zeroCount++;
        }
        while(zeroCount>k)
        {
            if(arr[left]==0)
            {
                zeroCount--;
            }
            left++;
        }
        maxi=max(maxi,right-left+1);
    }
    cout<<maxi;

    return 0;
}
