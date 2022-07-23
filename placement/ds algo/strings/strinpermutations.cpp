#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string a = "ahn";
    string b = "awh";
    int count= 0 ;
    for(int i = 0;i<a.length();i++){
        for(int j = 0;j<b.length();j++){
            if(a[i] ==b[j]){
                count = count + 1;
            }
        }
    }
    if(count == a.length()){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
return 0;
}