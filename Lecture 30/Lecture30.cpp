#include<iostream>
using namespace std;

class Complex{
    
    private:
    float real;
    float img;

    public:

    void setParameters(int real,int img){
        this->real = real;
        this->img = img;
    }

    void SqdistancefromOrigin(){
        float dist;

        dist = real*real +img*img;

        cout<<"The distance from origin is "<<dist;
        return;
    }
};

class New_account{
    public:

    int amount;
    int days;

    New_account(int amount_initial,int days_initial){
        amount = amount_initial;
        days = days_initial;
        cout<<"The constructor is called now "<<endl;
    }

    void print_account_details(){
        cout<<"The amount is "<<amount<<endl;
        cout<<"The number of days is "<<days<<endl;
    }

    ~New_account(){
        cout<<"Now the use of the object is completed and the object is getting destroyed"<<endl;
    }
    // void initial(){
    //     amount = 0;
    //     days = 0;
    // }
};

int main(){
    // Complex a,b;
    // a.setParameters(3,4);
    // a.SqdistancefromOrigin();
    New_account a(0,0);
    a.print_account_details();

    New_account b(3,100);
    b.print_account_details();

    cout<<"All the calculatiojn takes place"<<endl;


}

// There is a need to set data or initialize the data the moment the object is created.
//this can be done by using constructor.
//automatically called when any object is created/ also is a function
