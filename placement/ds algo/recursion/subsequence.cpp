#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subsequence(string input, string output){
if (input.empty()) {
        cout << output << endl;
        return ;
    }
    subsequence(input.substr(1), output + input[0]);
    subsequence(input.substr(1), output);
}

int main(){
    string s = "abc";
    subsequence(s,"");

return 0;
}