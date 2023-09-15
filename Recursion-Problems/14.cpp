//To move all 'x' at the end of string
#include<iostream>
using namespace std;

string movex(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char c=s[0];
    string str=movex(s.substr(1));
    if(c=='x')
    {
        return str+c;
    }
    return c+str; //Note the position of 'c'
}

int main()
{
    string x="bcjbjxxxkfilx";
    cout<<movex(x);
    return 0;
}
