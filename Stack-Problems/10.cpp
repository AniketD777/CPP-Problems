//Stock Span Problem (Using Stack pair concept)
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    vector<int> Price={100,80,60,70,60,75,85};
    vector<int> ans;
    stack<pair<int,int>> st;  //We push in (price,no. of days) format inside the stack
    int n=Price.size();

    for(int i=0;i<Price.size();i++)
    {
        int days=1; //Atleast 1 toh hoga hi for considering itself
        while(!st.empty() && st.top().first<=Price[i])
        {
            days+=st.top().second;
            st.pop();
        }
        st.push({Price[i],days});
        ans.push_back(days); //Don't use ans[i] or else throws segmentation fault
    }

    cout<<"Answer Array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
