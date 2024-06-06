//In cpp Array indexing starts from 0
//For accsessing element of an array - nameOfArray[indexNumber]

//index cannot be other than Integer data type
#include<iostream>
using namespace std;

int main(){
    int a[5];
    cout<<"Give the 5 input of array: "<<endl;//giving user input for elements of an array.
    for(int i = 0;i<5;i++){
        cin>>a[i];
    }

    cout<<"The Elements of array is"<<endl;//printing all elements seperated by space.
    for(int i = 0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}