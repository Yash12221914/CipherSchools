//Bubble sort

#include<iostream>
using namespace std;

int main(){
    int a[10];
    for(int i = 0;i<10;i++){
        cin>>a[i];
    }

    for(int j = 0;j<9;j++){
        int temp;
        for(int i = 0;i<10-j;i++){
            if(a[i+1]<a[i]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }

    for(int i = 0;i<10;i++){
        cout<<a[i]<<" ";
    }
}