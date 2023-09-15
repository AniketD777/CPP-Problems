//Next Smaller element using stack concept
#include<iostream>
#include<stack>
using namespace std;

void NextSmaller(int arr[],int sizeOfArr,int IndexArr[])
{  
    stack<int> st;
    int j=sizeOfArr-1;
    for(int i=sizeOfArr-1;i>=0;i--)
    {
        if(st.empty())
        {
            IndexArr[i]=-1;
            st.push(arr[i]);
            continue;
        }
        int temp2=0;
        if(arr[i]>st.top())
        {
            IndexArr[i]=j+temp2;
            st.push(arr[i]);
            j--;
            continue;
        }
        
        int temp=j;
        while(arr[i]<=st.top() && !st.empty())
        {
            st.pop();
            j++;
            temp2++;
        }
        if(st.empty())
        {
            IndexArr[i]=-1;
            st.push(arr[i]);
            j=temp+temp2-1;
        }
        else
        {
            IndexArr[i]=j;
            st.push(arr[i]);
            j=temp+temp2-1;
        }
    } 
}

int main()
{
    int arr[]={3,2,3,2,1};
    int sizeOfArr=(sizeof(arr)/sizeof(arr[0]));
    int IndexArr[sizeOfArr];
    NextSmaller(arr,sizeOfArr,IndexArr);
    for(int i=0;i<sizeOfArr;i++)
    {
        cout<<IndexArr[i]<<" ";
    }
    return 0;
}
