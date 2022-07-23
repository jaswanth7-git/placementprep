#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(12);
    v.push_back(13);
    v.push_back(13);
    v.push_back(11);
    v.push_back(11);
    v.push_back(13);
    v.push_back(12);
    v.push_back(12);

    int x = 1;
    for(int i=0;i<v.size();i++){
        x = x^v[i];
    }
    cout<<x<<endl;
    return 0;
}