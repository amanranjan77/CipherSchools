/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"Input 4 integer a,b,c and d"<<endl;
    
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cout<<(a>b&&c>d)<<endl;
    cout<<(a>b||c>d);
    //c++ interprets true as 1 and false as 0.
    
    return 0;
}