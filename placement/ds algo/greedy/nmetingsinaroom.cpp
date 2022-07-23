#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//sort on basis of end time 
static bool comp(pair<int,int>a,pair<int,int>b){
    return a.second < b.second;
}
 
int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>v(n);
        for(int i = 0;i<n;i++){
            v[i] = {start[i],end[i]};
        }
        sort(v.begin(),v.end(),comp);
        int i=0;
        int j = 1;
        int count = 1;
        while(j<n){
            if(v[i].second < v[j].first){
                count++;
                i = j;
                j++;
            }else{
                j++;
            }
        }return count;
    }

int main(){
    
return 0;
}