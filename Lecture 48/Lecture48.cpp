#include<iostream>
using namespace std;

void printmaxclassattend(int start[],int end[],int class_id[]){
    cout<<"The classes you should attend";
    cout<<class_id[0];

    int end_of_class;
    
    end_of_class = end[0];

    for(int i = 1;i<9;i++){

        if(start[i]>=end_of_class){
            cout<<class_id[i];
            end_of_class = end[i];
        }
    }
}

int main(){

    int start[] = {2,2,4,1,5,8,9,11,13};
    int end[] = {3,5,7,8,9,10,11,14,16};
    int class_id[] = {4,2,3,1,5,6,7,8,9};

    printmaxclassattend(start,end,class_id);

    return 0;

}