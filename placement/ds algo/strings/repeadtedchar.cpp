#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char repeated(string s){
    map<char,int>m;
    for(int i=0;i<s.length();i++){
        m[s[i]] += 1;
    }

    char ch ;
    int max = 0;
    for(int i=0;i<s.length();i++){
        if(m[s[i]]>max){
            ch = s[i];
            max  = m[s[i]];
        }
    }return ch;
}

int main(){
    string s;
    cin>>s;
    cout<<repeated(s);
    
return 0;
}