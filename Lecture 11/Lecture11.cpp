#include<iostream>
using namespace std;

//using while loop to print numbers from 1 to 100

int main(){

    // int i = 1;
    // while(i<=100){
    //     cout<<i<<endl;
    //     i++;
    // }

    //Guessing the number till desired input
    int i = 100;
    int input;
    for(i = 1;i<101;i++){
        cin>>input;
        if(input == 65){
            cout<<"Congrats you find the correct number";
            break;
        }
    }
    return 0;
}