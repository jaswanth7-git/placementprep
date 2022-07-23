#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    
    int f = 0;
    int e = s.length()-1;
    while(f<=e){
        if(s[f] == '+' or s[f] == '=' or s[f] == ' ' or s[f] == '.' or s[f] == ';' or s[f] == '-' or s[f] == ':' or s[f] == ',' or s[f] == '!' or s[f] == '@' or s[f] == '#' or s[f] == '$' or s[f] == '%' or s[f] == '^' or s[f] == '&' or s[f] == '*' or s[f] == '(' or s[f] == ')'){
            f++;
        }
   else if(s[e] == '+' or s[e] == '=' or s[e] == ' ' or s[e] == '.' or s[e] == ';' or s[e] == '-' or s[e] == ':' or s[e] == ',' or s[e] == '!' or s[e] == '@' or s[e] == '#' or s[e] == '$' or s[e] == '%' or s[e] == '^' or s[e] == '&' or s[e] == '*' or s[e] == '(' or s[e] == ')'){
            e--;
        }
        else{
            char temp = s[f];
            s[f] = s[e];
            s[e] = temp;
            f++;
            e--;
        }
        
        
    }cout<<s;
}