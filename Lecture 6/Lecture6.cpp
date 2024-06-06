//Conditional Statement


#include<iostream>
using namespace std;

int main(){


//If Statement - For single Statment.

    // int a;
    // cout<<"Enter an integer";
    // if(a>0){
    //     cout<<"Possitive";
    // }



//If-Else Statement - For two Statments.

    // int a;
    // if(a>0){
    //     cout<<"Possitive";
    // }else{
    //     cout<<"Negative";
    // }

//If Else-if Statement - For Multiple Statment.

    // int height;
    // cout<<"Enter your height";
    // cin>>height;
    // if(height>5){
    //     cout<<"Tall";
    // }else if(height>4){
    //     cout<<"Average";
    // }else if(height>3){
    //     cout<<"short";
    // }else{
    //     cout<<"dwarf";
    // }


//Switch Statement - For Multiple case Statment.
    int day;
    cout<<"Enter a day"<<endl;
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thrusday";
        break;
    default:
        cout<<"Weekend";
        break;
    }
    return 0;
}