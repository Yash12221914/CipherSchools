#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int attendance;
    float marks;
    void calculate_percentage(){
        cout<<marks<<"%";
    }
};

int main(){
    Student s1,s2,s3;
    s1.name = "Yash";
    s1.attendance = 93;
    s1.marks = 98;
    s1.calculate_percentage();
}