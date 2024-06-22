#include<iostream>
using namespace std;

int main(){
    int a;
    int *b = &a;

    cout<<"The address of a is : "<<b<<"The address next to a is : "<<b+1<<endl;

    int arr[5];
    int *d = &arr[0];

    for(int i = 0;i<6;i++){
        cout<<&arr[i]<<endl;
    }
    //The difference in each address of 4 bytes.
    return 0;
}