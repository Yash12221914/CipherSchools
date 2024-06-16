//Do while loop and infinite loop

#include<iostream>
using namespace std;


int main(){
    // int pass;
    // do
    // {
    //     cin>>pass;
    // } while (pass<9999);

    // return 0;
    
    //infinite loop
    int count = 0; 
    for(int i = 0; ;i++){
        count++;
        if(count == 6){
            break;
        }
        cout<<i;
    }
}