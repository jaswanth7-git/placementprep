#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    vector<int>u;
    vector<int>res(5);
    v.push_back(3);
    v.push_back(21);
    v.push_back(5);
    u.push_back(7);
    u.push_back(32);
    copy(v.begin(),v.end(),res.begin());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
return 0;
}