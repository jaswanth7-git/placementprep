#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    void swap(vector<int> &arr, int first, int second) {
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }

void cyclicsort(vector<int>&v){
    int i = 0;
    while(i<v.size()){
        if(i!=v[i]){
            swap(v,i,v[i]);
            //wont work
            // int temp = v[i];
            // v[i] = v[v[i]];
            // v[v[i]] = temp;

        }
        else{
            i++;
        }
    }
}



int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
        for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    cyclicsort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
  
return 0;
}