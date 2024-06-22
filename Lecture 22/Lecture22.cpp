#include<iostream>
using namespace std;

int main(){
    //pointers is a type of variable which is used to store the address,
    //whereas the nornmal variable is used to store the values.

    int a;
    int b;
    int *c = &a;
    int *d = &b;

    a = 2;
    b = 3;

    cout<<"The value of a before changing is: "<<a<<endl;
    cout<<"The value of b before changing is: "<<b<<endl;

    a = 5;
    b = 6;

    cout<<"The value of a after changing is: "<<a<<endl;
    cout<<"The value of b after changing is: "<<b<<endl;
    *c = 7;
    *d = 8;

    cout<<"The value of a after changing(using pointer) is: "<<a<<endl;
    cout<<"The value of b after changing(using pointer) is: "<<b<<endl;
    return 0;
}