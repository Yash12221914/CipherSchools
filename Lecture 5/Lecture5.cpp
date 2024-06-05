#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;

    cout<<"Enter Four number: "<<endl;

    cin>>a;  //Taking values from user
    cin>>b;
    cin>>c;
    cin>>d;

    cout<<(a>b)<<endl; //Returns 0 when false and 1 when True
    cout<<(a>b || c<d)<<endl;  // Multiple conditional statement
    cout<<(a<b && c>d)<<endl;  //Using AND(&&),OR(||) Operator for multiple contitional statements.
    return 0;
}