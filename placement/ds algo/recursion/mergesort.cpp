#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>&v,int s,int mid,int e){
    int f = s;
    int sec = mid;
    int k = 0;
    vector<int>mix(e-s);
    while(f<mid && sec<e){
        if (v[f] < v[sec]) {
                
                mix[k] = v[f];
                f++;
            } else{
                mix[k] = v[sec];
                sec++;

            }k++;
    }

            while(f<mid){
                mix[k] = v[f];
                f++;
                k++;
            }
            while(sec<=e){
                mix[k] = v[sec];
                sec++;
                k++;
            }

            for(int i=0;i<mix.size();i++){
                v[s+i] = mix[i];
            }
    



}
void mergesort(vector<int>&v,int s,int e){
    int mid = (s+e)/2;
    if(e-s==1){
        return ;
    }
    mergesort(v,mid,e);
    mergesort(v,s,mid);
    merge(v,s,mid,e);
}

int main() {
     vector<int> arr;
     arr.push_back(12);
     arr.push_back(1);
     arr.push_back(32);
     arr.push_back(0);
     arr.push_back(4);
     for(int i=0;i<arr.size();i++){
          cout<<arr[i]<<" ";
        }cout<<endl;
        mergesort(arr, 0, arr.size());
        for(int i=0;i<arr.size();i++){
          cout<<arr[i]<<" ";
        }
}