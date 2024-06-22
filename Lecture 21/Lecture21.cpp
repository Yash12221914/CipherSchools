#include<iostream>
using namespace std;

int main(){
    int a;
    float b;

    int *c = &a;
    float *d = &b;

    cout<<"The adress of a is: "<<&a<<endl;
    cout<<"The adress of b is: "<<&a<<endl;
    cout<<"The value stored in c is: "<<c<<endl;
    cout<<"The value stored in d is: "<<d<<endl;
    return 0;    
}