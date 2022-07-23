#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}
void insert(vector<int>&v ,int element){
    int n = v.size();
    v[n] = element;
    int i = n;
   while(i>0){
       if(v[i]>v[int(i/2)]){
           swap(v[i],v[int(i/2)]);
       }else{
           break;
       }
       i = i/2;
   }
}
int main(){
    vector<int> v;
    v.push_back(50);
    v.push_back(30);
    v.push_back(40);
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    v.push_back(30);
    insert(v,60);
    for(int x : v){
        cout<<x<<" ";
    }
return 0;
}