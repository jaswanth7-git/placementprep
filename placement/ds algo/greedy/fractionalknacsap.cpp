#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

double fractionalKnapsack(int W, Item arr[], int n)
{
    vector<pair<double,int> >v;
    for(int i = 0;i<n;i++){
        double ratio = (arr[i].value*1.0) / (arr[i].weight*1.0);
        v.push_back(make_pair(ratio,i));
    }
    sort(v.begin(),v.end(),greater<pair<double,int> >());
    int curweight = 0;
    double profit = 0;
    for(int i=0;i<v.size();i++){
        if(curweight + arr[v[i].second].weight <= W){
            curweight += arr[v[i].second].weight;
            profit += arr[v[i].second].value;
        }else{
            double left = (W-curweight)*1.0;
            profit += left*v[i].first;
            break;
        }
    }
    return profit;
}
int main(){
    
return 0;
}