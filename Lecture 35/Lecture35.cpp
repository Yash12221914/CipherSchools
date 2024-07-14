#include<iostream>
// #include<stack>
// #include<queue>
//#include<map>
#include<list>
using namespace std;

int main(){
    list<int> a;

    a.push_front(2);
    a.push_back(1);
    a.push_front(3);
    a.push_front(4);

    for(auto j = a.begin();j != a.end();j++){
        cout<<*j<<endl;
    }
    a.sort();
    for(auto j = a.begin();j != a.end();j++){
        cout<<*j<<endl;
    }

    // map<string,int> hash;

    // hash["yash"] = 1;
    
    // hash["raj"] = 2;
    
    // hash["golu"] = 3;

    //cout<<"The value of the yash on hash table is: "<<hash["golu"];

    // for(auto j = hash.begin();j!=hash.end();j++){
    //     cout<<"The key will be: "<<j->first<<" And the value is: "<<j->second<<endl;
    // }    

    // queue<int> s;

    // s.push(0);
    // s.push(1);
    // s.push(2);

    // cout<<s.front();
    // cout<<endl;
    // s.pop();
    // cout<<s.back()<<endl;

    // if(s.empty() == 1){
    //     cout<<"Stack is empty"<<endl;
    // }else{
    //     cout<<"Stack is not empty"<<endl;
    // }
    // s.pop();
    // s.pop();


    // if(s.empty() == 1){
    //     cout<<"Stack is empty"<<endl;
    // }else{
    //     cout<<"Stack is not empty"<<endl;
    // }
    // return 0;
    // s.push(0);
    // s.push(1);
    // s.push(2);

    // cout<<s.front();
    // cout<<endl;
    // s.pop();
    // cout<<s.back()<<endl;

    // if(s.empty() == 1){
    //     cout<<"Queue is empty"<<endl;
    // }else{
    //     cout<<"Queue is not empty"<<endl;
    // }
    // s.pop();
    // s.pop();


    // if(s.empty() == 1){
    //     cout<<"Queue is empty"<<endl;
    // }else{
    //     cout<<"Queue is not empty"<<endl;
    // }







    return 0;
}