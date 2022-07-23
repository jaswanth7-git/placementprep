#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool areIsomorphic(string str1, string str2)
{
    map<char, int>m1;
    map<char, int>m2;
    if(str1.length() != str2.length()){
        return false;
    }
    for(int i=0; i<str1.length(); i++){
        m1[str1[i]] +=1;
    }
    for(int i=0; i<str2.length(); i++){
        m2[str2[i]] +=1;
    }
    
    for(int i=0; i<str1.size(); i++){
        if(m1[str1[i]] != m2[str2[i]]){
            return false;
        }
    }return true;
}
int main(){
    cout<<areIsomorphic("ayb","bya");
return 0;
}