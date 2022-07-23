#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"enter binary number: ";
    cin>>a;
    cout<<endl;
    int ans =0;
    int i=0;
    while(a!=0){
        // remember we here we are inputing the binary number as an integer
        int lastdigit = a%10;
        if(lastdigit == 1){
            ans+=pow(2,i);
        } i++;
            a = a/10;
    }cout<<"the decimal number is: "<<ans;
return 0;
}