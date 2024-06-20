//Making a prototype and then calling a function
#include<iostream>
using namespace std;

int sum(int,int);//creating a prototype

int main(){
    int a = 5;
    int b = 20;

    cout<<sum(a,b)<<endl;//calling the function
    return 0;
}

int sum(int a,int b){//defination of a function
    return (a+b);
}