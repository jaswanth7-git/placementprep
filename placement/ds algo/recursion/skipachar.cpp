#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string skip(string ans){
    if(ans == ""){
        return "";
    }
    if(ans[0] == 'a'){
        return skip(ans.substr(1));
    }else{
        return ans[0]+skip(ans.substr(1));
    }

}
int main(){
cout<<skip("alla jaswanth");
return 0;
}