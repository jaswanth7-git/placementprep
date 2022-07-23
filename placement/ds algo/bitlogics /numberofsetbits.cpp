#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    // setbits are nothing but 1s in binary number
    int count = 0;
    cout<<"Enter any number : ";
    cin>>a;
    cout<<endl;

    while(a!=0){
        
        if(a&1){
            count++;
        }
        a = a>>1;

    }
    cout<<"total number of setbits = "<<count<<endl;
return 0;
}   