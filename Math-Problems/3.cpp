//Print a number in reverse order

#include<iostream>
using namespace std;

int main()
{
    cout<<"Print a number in reverse order:"<<endl;
    cout<<"Enter No. :";
    int num;
    cin>>num;
    while(num>0)
    {
      int lasdig=num%10; //Remainer is the last digit only if divided by 10
      cout<<lasdig;
      num=num/10;
    }
 
 return 0;
}

//      OR

/*#include<iostream>
using namespace std;

int main()
{
    cout<<"Print a number in reverse order:"<<endl;
    cout<<"Enter No. :";
    int num;
    cin>>num;
    int express=0;
    while(num>0)
    {
      int lasdig=num%10;
      express=express*10+lasdig;
      num=num/10;
    }
    cout<<express<<endl;
  return 0;
}
*/



