//To print two keypad keys combination together
#include<iostream>
using namespace std;

void keypad(string s1,string s2)
{
    if(s1.length()==0)
    {
        return;
    }
    string c=s1.substr(0,1);//We can take char but to append strings we did this
    for(int i=0;i<s2.length();i++)
    {
        cout<<c+s2[i]<<endl;
    }
    keypad(s1.substr(1),s2);
}

int main()
{
    string arr[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    cout<<"Enter num1: ";
    int n1,n2;
    cin>>n1;
    cout<<"Enter num2: ";
    cin>>n2;
    keypad(arr[n1],arr[n2]);
    
    return 0;
}
