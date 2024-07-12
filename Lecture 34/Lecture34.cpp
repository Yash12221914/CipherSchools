//stl - standard template library
//vector - it is a dynamic array where the size can be any thing as per our need
#include<iostream>
#include<vector>
using namespace std;

int main(){

    int *arr;
    arr = new int[5];//here the size is fixed so we have to use vector

    vector<int> a;//here we do not need to mention the size of the array
    
    cout<<"The size of the array is: "<<a.size()<<endl;

    for(int i = 0;i<5;i++){
        a.push_back(i);
    }

    a.pop_back();
    cout<<"The size of the array is: "<<a.size()<<endl;

    //to print the first element of the vector we can simply use the indexing
    cout<<"The first element is : "<<a[0];
    for(auto j = a.begin();j<a.end();j++){
        cout<<*j;
    }

    cout<<endl<<"The capacity of the vector is: "<<a.capacity();
}