//Update Bit algorithm(First Clear the bit and then set it)
#include<iostream>
using namespace std;

int updatebit(int num,int pos)
{
    int temp=(num&(~(1<<pos)));
    int ans=(temp|(1<<pos));
    return ans;
}

int main()
{
    int num,pos;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<"Enter positon: ";
    cin>>pos;
    cout<<updatebit(num,pos)<<endl;
    return 0;
}
