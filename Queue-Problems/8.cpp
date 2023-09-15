//Sliding Window Maximum Problem(Using Queue)
#include<iostream>
#include<queue>
#include<algorithm>
#include<climits>
using namespace std;

void maxSliWind(int k,int arr[],int sizeOfArr)
{
    queue<int> q;
    queue<int> tempQ;
    int i=0;
    while(q.size()!=k)
    {
        q.push(arr[i]);
        i++;
    }
    
    for(int j=i;j<=sizeOfArr;j++)
    {
        int maxi=INT_MIN;
        while(!q.empty())
        {
            if(maxi<q.front())
            {
                maxi=q.front();
            }
            tempQ.push(q.front());
            q.pop();
        }
        cout<<maxi;
        
        queue<int> swap=tempQ;
        tempQ=q;
        q=swap;
        
        q.push(arr[i]);
        i++;
        q.pop();
    }//'j' jaisi sizeOfArr ke barabar hua then loop terminates 
}

int main()
{
    int k;  //For size of window
    cout<<"Enter Size of Window: ";
    cin>>k;
    int arr[]={1,3,-1,3,5,3,6,7};//Expected cout for k=3 =>335567
    int size=sizeof(arr)/sizeof(arr[0]);
    maxSliWind(k,arr,size);
    return 0;
}
