//To print a traingle using 0 and 1(101 1010101 10101010101 1.......)
// or we can say row+column if even then '1' else if odd then '0'
#include<iostream> 
using namespace std;

int main()
{
    cout<<"Enter size of the triangle: ";
    int size;
    cin>>size;
    for(int i;i<=size;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}
