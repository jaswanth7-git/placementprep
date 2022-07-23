#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 string factorial(int n)
{
     int fact = 1;
 
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
 
    return to_string(fact);
}

int main(){
    cout<<factorial(5);
return 0;
}