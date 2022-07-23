#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    
    cout<<"answer is ";
    cout<<fib(6);
    return 0;
}                   