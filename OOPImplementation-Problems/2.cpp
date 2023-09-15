//Nested member functions(Check is a binary or not)
#include<iostream>
using namespace std;

class binary
{
    string s;
    public:
    void input();//Will define later 
    void check();//Will define later
};

void binary :: input()
{
    cout<<"Input Binary: ";
    cin>>s; //'s' is known by input() as is in same class binary 
    check();//Including check() here is called nesting of member function
}           //ie. no need to call check() in main function

void binary :: check()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Not a binary!"<<endl;
            exit(0);//Same as 'return' just destructor is not called
        }           //at the end of function
    }
    cout<<"Is a Binary!";
}

int main()
{
    binary a;
    a.input();
    //a.check(); (Due to nesting we solved the problem of not
    //            calling it in main by ourself)
    return 0;
}
