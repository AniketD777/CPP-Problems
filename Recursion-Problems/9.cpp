//Reverse a string
#include<iostream>
#include<string>
using namespace std;

void rev(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string str=s.substr(1);
    rev(str);
    cout<<s[0];
}

int main()
{
    string s;
    cout<<"Enter string: ";
    cin>>s;
    rev(s);
    return 0;
}
