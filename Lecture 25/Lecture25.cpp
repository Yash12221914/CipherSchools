#include<iostream>
using namespace std;


void minandMax(int *a,int *min,int *max){
    int large = a[0],small = a[0];
    for(int i = 1;i<6;i++){
        if(a[i]>large){
            large = a[i];
        }
        if(a[i]<small){
            small = a[i];
        }
    }
    cout<<"the maximun number is: "<<large<<" The smaller number is: "<<small<<endl;
}


int main(){
    int a[5];

    int min,max;

    for(int i = 0;i<6;i++){
        a[i] = i;
    }
    minandMax(a,&min,&max);
}