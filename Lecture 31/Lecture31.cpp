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

    int number_airbags;
    int ac_consumption;

};

int main(){

    Car a;
    a.name = "Porche";
    a.displayname();
}