//Tower of Hanoi problem
#include<iostream>
using namespace std;

//'n' is no. of rings
//'src' is source 'hel' is helper 'des' is destination initially 
void TowOfHanoi(int n,char src,char hel,char des)
{
    if(n==0)
    {
        return;
    }
    
    TowOfHanoi(n-1,src,des,hel);//Move n-1 disks from A to B
    cout<<"Move From "<<src<<" to "<<des<<endl;//Move nth disk from A to C
    TowOfHanoi(n-1,hel,src,des);//Move n-1 disks from B to C
}

int main()
{
    int n;
    cout<<"Enter No. of rings: ";
    cin>>n;
    char A,B,C;
    A='A';
    B='B';
    C='C';
    TowOfHanoi(n,A,B,C);
    return 0;
}
