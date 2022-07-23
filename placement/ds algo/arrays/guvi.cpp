#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin>>n;
    vector<int>v;
    v.push_back(1000);
    v.push_back(1000);
    for(int i=2;i<n+3;i++){
        int val = v[i-2]+v[i-1];
        v.push_back(val);
    }


    for(int i=0;i<n+1;i++){
        sum = sum + v[i];
    }
    // cout<<v[0];
    // cout<<v[1];

    cout<<sum;
}