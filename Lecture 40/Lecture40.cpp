//Insertion sort
#include<iostream>
using namespace std;

int main(){

    cout<<"Input the elements"<<endl;


    int i,j;

    int a[6];

    for(i = 0;i<6;i++){
        cin>>a[i];
    }

    int key;

    for(j = 1;j<6;j++){

        key = a[j];
        i = j-1;

        while(a[i]>key && i>=0){
            a[i+1] =a[i];
            i--;
        }
        a[i+1] = key;
    }
    for(i = 0;i<6;i++){
        cout<<a[i]<<" ";
    }
    
}