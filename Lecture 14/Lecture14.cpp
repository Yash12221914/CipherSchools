#include<iostream>
using namespace std;


//we use function to compare the integer is wether 5 or not and return 5 or 0 instead.


int compare(int a){
    if(a == 5){  // comparing the integer a to 5.
        return 5;
    }else{
        return 0;
    }
}

int main(){
    int a;
    cin>>a;
    cout<<compare(a)<<endl;// calling a function

}