#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int a;
cout<<"enter any decimal value: ";
cin>>a;
cout<<endl;
int ans = 0;
int i = 0;
while(a!=0){
    int lastbit = a&1;
    ans += lastbit*pow(10,i);
    i++;
    a = a>>1;
}
cout<<"binary number is: "<<ans;
return 0;
}