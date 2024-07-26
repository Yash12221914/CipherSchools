//Recursion is something taht repeat itself
#include<iostream>
using namespace std;

int fib(int n){
    if(n == 1){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cout<<"Enter the number you want fibbonaci number: ";
    cin>>n;

    cout<<fib(n);

    return 0;
}