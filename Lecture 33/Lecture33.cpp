//polymorphism--ability to
#include<iostream>
using namespace std;
//encapsulation is storing every thing in a capsule.it stored data related to a partcular class

// class Student{

//     private:

//     int marks;
//     string name;
//     int roll;

//     public:

//     void displayMarks(){
//         cout<<marks;
//     }

// };

//inheritence

//This is the base class 



class Vehicle{
    public:

    int number_tyers;
    string name;
    int capacity;
    int milegage;

    public:

    void displaymilegage(){
        cout<<"The milegage is : "<<milegage;
    }
    void displayname(){
        cout<<"The name is : "<<name;
    }
};

//Now I will inherit the features of the base class into the derived classes

class SchoolBus: public Vehicle{

    string school_name;
    int number_holidays;

    void displaynameofschool(){
        cout<<"the name of school is: "<<name;
    }
};

class Car: public Vehicle{

    //No member named milagage
    //no member function named calculatemilagage
    private:
    int number_airbags;
    int ac_consumption;
    public:
    void showmilegage(){
        cout<<milegage;
    }

};

class SUV: public Car{// multiple inheritence

    public:
    int four_wheel_drive;

};

class Coordiate{
    public:
    float a;
    float b;

    public:

    Coordiate operator+(Coordiate const & obj){

        Coordiate z;

        z.a = this->a + obj.a;
        z.b = this->b + obj.b;
        return z;
    }

    void sqdistancefromcoordinates(float a){
        float dist;
        dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
        cout<<dist;
    }

    void sqdistancefromcoordinates(float a,float b){
        float dist;
        dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
        cout<<dist;
    }
};

int main(){

    Coordiate x;
    x.a = 3;
    x.b = 4;
    //x.sqdistancefromcoordinates(0,0);
    //x.sqdistancefromcoordinates(0,0);//this is called overloading of a function 
    Coordiate y;
    y.a = 5;
    y.b = 6;

    Coordiate z;
    z = x+y;

    cout<<"the coordinates after addition are: "<<z.a<<" "<<z.b;
    return 0;
    //overloading of a function
}
//modes of inheritence---------
//public,private and protected

//when the base class is public any one can  access it
//and when it is inherited protectedly - means can be accesed by class but not outside


//abstraction