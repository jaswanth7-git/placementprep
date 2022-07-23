#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(5);
    v[0]=1;
    v[1]=1;
    v[2]=2;
    v[3]=2;
    v[4]=3;
    int ans = 0;
    for(int i=0;i<5;i++){
        ans = ans^v[i];
    }
    cout<<ans<<endl;
}
