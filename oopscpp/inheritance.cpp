#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class human{
    public:
    int height;
    int weight;
    int age;
    human(){
        cout<<"parent constructer called first"<<endl;
    }
    private:
    int id;
};

class male : public human {
    public:
    string name;
    string color;
    male(){
        cout<<"child class constructure called"<<endl;
    }
};

int main(){
    male a;
    a.age = 12;
    a.weight = 12;
    a.height = 12;
    a.color = "white";
    a.name = "yuvraj";
    cout<<a.age<<" "<<a.weight<<" "<<a.height<<" "<<a.color<<" "<<a.name;

//parent class constructer will be called first and then child class constructer
    //trying to acces private varible of parent class over a public connection
    // a.id = 12;
    // cout<<a;
    //this wont wrok

    //take a look at acces modifiers table 
return 0;
}