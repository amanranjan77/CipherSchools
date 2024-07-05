#include<iostream>
using namespace std;
int main(){
    int a[6];
    int i;
    for( i=0; i<6; i++){
        cin>>a[i];
    }
    for( i=5;i>0;i--) {
        cout<<a[i]<<endl;
    }
   
    
    return 0;
}