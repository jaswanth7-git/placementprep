#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>a;
    int n;
    int m;
    int ans = 0;
    int XOR = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] != 1){
               a[i][j] = abs((XOR ^ a[i][j]) - a[i][j]);
               ans++;
            }
        }
    }
    return ans;
return 0;
}