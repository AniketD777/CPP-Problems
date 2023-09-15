//Set Bit algorithm(To invert 0 to 1 at particular position but 1 remains as it is)
#include<iostream>
using namespace std;

int setbit(int num,int pos)
{
    int ans;
    ans=(num|(1<<pos));
    //here if the specified position bit is 0 then is inverted to '1' and if 1 then is kept '1' only 
    return ans;
}

int main()
{
    int num,pos;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<"Enter positon: ";
    cin>>pos;
    cout<<setbit(num,pos)<<endl;
    return 0;
}
