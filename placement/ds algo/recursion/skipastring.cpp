#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string skip(string ans){
    if(ans == ""){
        return "";
    }
    
    if(ans.find("lla") == 0){
        return skip(ans.substr(3));
    }else{
        return ans[0]+skip(ans.substr(1));
    }

}
int main(){
cout<<skip("alla jaswanth");
return 0;
}