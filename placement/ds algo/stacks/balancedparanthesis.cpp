#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
bool IsComplement(char open,char close){
    if(open == '{' && close == '}'){
        return true;
    }else if(open == '(' && close == ')'){
        return  true;
    }else if(open == '[' && close == ']'){
        return true;
    }else{
        return false;
    }
}
bool IsOpening(char open){ 
    if(open == '(' || open == '{' || open == '['){
        return true;
    }
    return false;
}

int main(){
    //cout<<Ismatching("(",")")<<endl;
    //cout<<IsOpening("}")<<endl 
    stack<char> s;
    string testcase = "][]{}{()";
    for(int i = 0;i<testcase.length();i++){
        if(IsOpening(testcase[i])){
            s.push(testcase[i]);
        }else{
            if(IsComplement(s.top(),testcase[i])){
                s.pop();
            }else{
                cout<<"Not Balancced"<<endl;
                break;
            }
            
        }
    }if(s.empty()){
        cout<<"Balanced"<<endl;
    }
}