// If  statement
#include <iostream>
using namespace std;

int main()
{
    // float a,b;
    // cout<<"input 2 float numbers:"<<endl;
    // cin>>a>>b;
    // if(a>0.01 && b>a)
    // {
    //     cout<<"The condition in if statement is  correct";
    // }
    // return 0;

}

    
    //  THIS IS IF ELSE STATEMENT

    int age;
    cout<<"enter your age : ";
    cin>>age;

    if(age>=18){
        cout<<"you are adult and you can drive";
    }
    else if(age>=14 || age<18){
        cout<<"you are a teenager";
    }
    else{
        cout<<"you are not eligible to drive";
    }
    cout<<endl;


    //Swtich case statement

    int marks;
    cin>>marks;
    switch (marks)

    {
    case 90:
    cout<<"your grade is O ";
    break;
    case 60:
    cout<<"your grade is B+ ";
    break;
    case 70:
    cout<<"your grade is A ";
    break;
    case 80:
    cout<<"your grade is A+ ";
    break;
    default:
    cout<<"you did not appeared for exams ";
    break;
    }

    return 0;
}