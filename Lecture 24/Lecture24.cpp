#include<iostream>
using namespace std;

void swap(int *x,int *y){
    int c; 
    c = *x;
    *x = *y;
    *y = c;
    cout<<"The swapping is completed"<<endl;
}

int main(){
    int a;
    int b;
    a = 3;
    b = 4;
    swap(&a,&b);
    cout<<"The values of a nad b after swap are: "<<a<<" "<<b<<endl;
    return 0;
}