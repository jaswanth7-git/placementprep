#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(12);
    v.push_back(1);
    v.push_back(112);
    v.push_back(32);
    v.push_back(21);
    v.push_back(77);
    int k = 3;
    priority_queue<int>pq;
    for(int i = 0;i<k;i++){
        pq.push(v[i]);
    }
    for(int i = k;i<v.size();i++){
        if(pq.top()>v[i]){
            pq.pop();
            pq.push(v[i]);
        }
    }
    cout<<"kth smallest element is "<<pq.top();
return 0;
}