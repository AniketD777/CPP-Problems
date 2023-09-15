//Clear Bit algorithm(To invert 1 to 0 at a particular position)
#include<iostream>
using namespace std;

int clearbit(int num,int pos)
{
    int ans=num&(~(1<<pos));//To invert 1 to 0 at the specified position
    return ans;
}
int main()
{
    int num,pos;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<"Enter positon: ";
    cin>>pos;
    cout<<clearbit(num,pos)<<endl;
    return 0;
}
