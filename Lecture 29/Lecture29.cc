#include<iostream>
using namespace std;

class Bank_client{

    private:

    int credit_number;
    int cvv;
    string password;
    
    string user_name;

    public:
    string name;

    void set_credit_cardNumber(int credit_number){
        this->credit_number = credit_number;
        cout<<"The address of the object calling this functions is "<<this<<endl;
    }

    int get_credit_cardNumber(){
        cout<<"The credit card number is "<<credit_number;
        return credit_number;
    }
    void set_allDataAtOnce(int credit_number,int name,int password){
        this->credit_number = credit_number;
        this->name = name;
        this->password = password;
    }

    //we use get function to get the data 
    //we use set function to set the data
};

int main(){
    Bank_client a,b,c;
    a.name = "yash";
    a.set_credit_cardNumber(456827913);
    a.get_credit_cardNumber();
    cout<<"The address of the object is "<<&a<<endl;
    return 0;
}