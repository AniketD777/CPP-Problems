//Replace with '3.14' for 'pi' in string
#include<iostream>
using namespace std;

void pi(string s)
{
    if(s.length()==0)
    {
        return;
    }
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        pi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        pi(s.substr(1));
    }
}

int main()
{
    string s;
    cout<<"Enter string: ";
    cin>>s;
    pi(s);
    return 0;
}
