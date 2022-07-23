#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class fullencapsulated {
    private:
    int a;
    string name;
}

class human {
    public:
    int age;
    string name;
    private:
    int emp_id;
    public:
    human(){
        this->age = 0;
        this->name = "#Name not initilized";
    }
};

int main(){
    human a;
    a.age = 12;
    cout<<a.age<<endl;
    cout<<a.name;
return 0;
}


/*

The process of grouping data members and corresponding methods into a single unit is known as Encapsulation.
It is an important part of object-oriented programming.
We can create a fully encapsulated class by making all the data members private.
If the data members are private, it can only be accessible within the class;
no other class can access that class’s data members. 

Advantages of encapsulation
Encapsulation is a way to achieve data hiding because other classes will not be able to access the data through the private data members.
In Encapsulation, we can hide the data’s internal information, which is better for security concerns.
By encapsulation, we can make the class read-only. The code reusability is also an advantage of encapsulation.
Encapsulated code is better for unit testing.
*/