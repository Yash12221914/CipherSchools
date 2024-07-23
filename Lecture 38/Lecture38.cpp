#include<iostream>
using namespace std;

int main(){
    int a[10];

    for(int i = 0;i<10;i++){
        cin>>a[i];
    }
    int l;
    for(int i = 0;i<9;i++){

        l = i;
        for(int j = i;j<10;j++){
            if(a[j]<a[l]){
                l = j;
            }
        }

        int temp;

        temp = a[i];
        a[i] = a[l];
        a[l] = a[temp];
    }
    for(int i = 0;i<10;i++){
        cout<<a[i]<<" ";
    }
    
}