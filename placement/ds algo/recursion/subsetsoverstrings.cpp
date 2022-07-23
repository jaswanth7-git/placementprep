#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subset(string p,string up){
    if(up == ""){
        cout<<p<<" ";
        return;
    }
    char ch = up[0];
    subset(ch+p,up.substr(1));
    subset(p,up.substr(1));
}

int main(){
    subset("","abc");
return 0;
}