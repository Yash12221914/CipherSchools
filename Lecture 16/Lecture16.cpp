//Making a prototype and then calling a function
#include<iostream>
using namespace std;

int sum(int a,int b){//defination of a function
    int c;
    c = (a+b);
    return c;
}

void printHi(){
    cout<<"HI"<<endl;
}

int main(){
    int a = 5;
    int b = 20;

    int d;
    d = sum(a,b);
    cout<<d<<endl;//calling the function
    printHi();
    return 0;
}
