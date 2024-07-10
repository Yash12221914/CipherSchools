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

int main(){

    SUV a;
    a.milegage = 50;
    Car b;
    SchoolBus c;
    a.name = "lo";
    b.name = "le";
    a.displayname();
    b.displayname();
}
//modes of inheritence---------
//public,private and protected

//when the base class is public any one can  access it
//and when it is inherited protectedly - means can be accesed by class but not outside