#include <iostream>
using namespace std;
int sum(int a, int b);

int main()
{
    int a,b;
    a=3;
    b=5;
    cout<<a<<endl;
    cout<<b<<endl;
    int c=sum(3,5);
    cout<<c<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
int sum(int a, int b){

    return a+b;
}