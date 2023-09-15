//To print the greatest number from the given number
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    sort(str.begin(),str.end(),greater<char>());
    cout<<"The biggest number possible is: "<<str<<endl;
    return 0;
}

