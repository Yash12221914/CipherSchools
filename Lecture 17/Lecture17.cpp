#include<iostream>
using namespace std;

int swap(int &a,int &b){
    int c;
    c = a;
    a = b;
    b = c;
    return 0;
}

int main(){
    int a = 6;
    int b = 4;
    cout<<"The elements before swap is :"<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"The elements after swap is :"<<a<<" "<<b<<endl;
    return 0;
}