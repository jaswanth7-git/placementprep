#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>v,int ele,int s,int e){
    int mid = s+(e-s)/2;
    if(s>e){
        return -1;
    }
    if(v[mid]==ele){
        return mid;
    }
    if(v[mid]<ele){
        return binarysearch(v,ele,mid+1,e);
    }
    
        return binarysearch(v,ele,s,mid-1);
}


int main(){
    vector<int>v;
    v.push_back(12);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(52);
    cout<<binarysearch(v,1,0,v.size()-1);
return 0;
}   