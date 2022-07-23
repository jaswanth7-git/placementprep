#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int meadian(vector<int>nums,int start,int end,int d){
    sort(nums.begin(),nums.end());
    
    if(d%2 == 0){
        int c = nums[(end-start+1)/2]+nums[(end-start-1)/2]/2;
        return c;
    }else{
        int c = nums[start+(end-start)/2];
        return c;
    }
    return -1;
}


int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    int m = meadian(v,0,2,3);
    cout<<m<<endl;
    m = meadian(v,1,3,3);
    cout<<m;
    
return 0;
}