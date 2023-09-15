//Trapping Rainwater
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int RainWater(vector<int> arr)
{
    int n=arr.size();
    stack<int> st;
    int rightGreater[n];//Index array

    //For next greater or equal index array
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && arr[st.top()]<arr[i])//Just the opposite of next smaller
        {                                         //and '=' condition removed because
            st.pop();                             //we want upto next equal or greater
        }
        if(st.empty())
        {
            rightGreater[i]=-1;
        }
        else
        {
            rightGreater[i]=st.top();   
        }
        st.push(i);
    } 
    
    //For No. of blocks occupied by water
    int i=0;
    int blocksOfWater=0;
    while(i<n)
    {
        if(rightGreater[i]==-1)
        {
            i++;
        }
        else
        {
            int area=(arr[i]*(rightGreater[i]-i-1));//-1 because of logic
            for(int j=i+1;j<rightGreater[i];j++)
            {
               area=area-arr[j];//To remove the blocks which lie in between
            }
            i=rightGreater[i];//To move to the same or greater height
            blocksOfWater=blocksOfWater+area;
            area=0;
        }
    }
    return blocksOfWater;                                        
}

int main()
{
    vector<int> arr={0,1,0,2,1,0,1,3,2,1,2,1,0};
    cout<<"Water harvested in "<<RainWater(arr)<<" blocks."<<endl;
    return 0;
}
