// Print 3rd character from string array
#include<iostream>
using namespace std;

int main()
{
    char arr[100];     //Allocation of memory for null character is very important. 
    cout<<"Input string: ";
    cin>>arr;
    int i=0;
    while(arr[i]!='\0')   // '\0' denotes null character.
    { 
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;
    cout<<"The third character in string is: "<<arr[2];
    return 0;
}
