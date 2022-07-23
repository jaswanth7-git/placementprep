#include <iostream>
#include <bits/stdc++.h>
using namespace std;


 bool search(string pat, string txt) 
    { 
    	int res = pat.find(txt,0);
    	if(res>=0){
    	    return true;
    	}
    	else{
    	    return false;
    	}
    }
// bool searchmannual(string pat,string txt)
//     { 
//         int j = 0;
//     	for(int i=0;i<pat.length();i++){
//     	        if(pat[i] == txt[j]){
//     	            j++;
//     	        }else{
//     	            j = 0;
//     	        }
    	    
//     	}return j == txt.length();
//     }

int main(){
    string pat = "aabbccddeeddff";
    string txt = "ddee";
    if(search(pat,txt)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
return 0;
}