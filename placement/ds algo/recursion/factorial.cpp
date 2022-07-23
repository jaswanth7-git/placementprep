#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
   if(n<=1){
       return 1;
   }
   return n*factorial(n-1);

}
int main(){
    string a =to_string(factorial(5)); 
    cout<<a;
return 0;
}