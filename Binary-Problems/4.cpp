//To check a number is a power of 2 or not
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter Number: ";
    int num;
    cin>>num;
    if((num&(num-1))==0)//Eg.4=100 and 3=011 => 100&011=000 but if 3=011 and 2=010 => 
                        // 011&010=010 ie. not 0 (this observation is seen for any pair)
    {
        cout<<"Yes a power of 2."<<endl;
    }
    else
    {
        cout<<"Not a power of 2."<<endl;
    }

    return 0;
}
