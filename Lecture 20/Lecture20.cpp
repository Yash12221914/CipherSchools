#include<iostream>
using namespace std;


int main(){

    int a;
    float b;
    double c;
    long d;
    long long e;
    long int f;
    long double g;

    cout<<"The size of int is: "<<sizeof(a)<<" The address of int is: "<<&a<<endl;
    cout<<"The size of float is: "<<sizeof(b)<<" The address of float is: "<<&b<<endl;
    cout<<"The size of double is: "<<sizeof(c)<<" The address of double is: "<<&c<<endl;
    cout<<"The size of long is: "<<sizeof(d)<<" The address of long is: "<<&d<<endl;
    cout<<"The size of long long is: "<<sizeof(e)<<" The address of long long is: "<<&e<<endl;
    cout<<"The size of long int is: "<<sizeof(f)<<" The address of long int is: "<<&f<<endl;
    cout<<"The size of long double is: "<<sizeof(g)<<" The address of long double is: "<<&g<<endl;
    return 0;

}