//Max consecutive 1's (By interchanging 'k' no. of zeroes in given array)(My Algorithm)
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr={0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k=3;
    stack<int> st;
    int maximum=0;
    for(int i=0;i<arr.size();i++)
    {
        int temp=0;
        int counter=0;
        for(int j=i;j<arr.size();j++)
        {
           if(arr[j]==0 && counter<k)
           {   
                st.push(arr[j]);
                counter++;
           }
           else if(arr[j]==1)
           {
                st.push(arr[j]);
           }
           else if(arr[j]==0 && counter==k)
           {
                break;
           }
        }
        temp=st.size();
        maximum=max(temp,maximum);
        while(!st.empty()) //To refresh the stack
        {
            st.pop();
        }
    }
    cout<<maximum;
    return 0;
}
