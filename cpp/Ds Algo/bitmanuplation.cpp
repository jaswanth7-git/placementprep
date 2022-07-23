#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main(){
    cout<<(4&8)<<endl;
    cout<<(4|8)<<endl;
    //checking odd or even using bitlogic 
    int n;
    cout<<"Enter any number "<<endl;
    cin>>n;
    if((n&1) == 1){
        cout<<"The number you entered is odd"<<endl;
    }else{
        cout<<"The number you entered is even"<<endl;
    }
}