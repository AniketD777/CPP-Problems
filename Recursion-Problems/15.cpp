//To print all subsequences of a string
#include<iostream>
using namespace std;

void sub(string input,string output)
{
    if(input.length()==0)
    {
        cout<<output<<endl;
        return;
    }
    sub(input.substr(1),output); //Exclude that character
    sub(input.substr(1),output+input[0]); //Include that character
}

int main()
{
    sub("ab","");
    return 0;
}
