#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long maxGroups(int N,vector<long>a,int k){
    map<long,int>m;
    vector<int>temp;
    long count = 0;
    sort(a.begin(),a.end());
    for(int i = 1;i<a.size();i++){
        if(a[i] == a[i-1]){
            a[i] == -1;
        }
    }
    for(int i = 0;i<N;i++){
        if(a[i]!=-1){
            m[a[i]]++;
        }
        
    }
    for(auto x : m){
        temp.push_back(x.second);
    }
    for(int i = 0;i<temp.size();i++){
        if(temp[i]<k){
            count+=1;
        }else{
            count += temp[i]/k;
        }
    }
    return count;
}

int main(){
    vector<long>v;
    int k = 5;
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(3);
    cout<<maxGroups(v.size(),v,k)<<endl;
return 0;
}