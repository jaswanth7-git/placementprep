#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void tower(int n ,string start,string helper,string end){
    if (n == 1) {
        cout<<"move "<<n<<" from "<<start<<" to "<<end;
        cout<<endl;
        return ;
    }
    tower(n-1,start,end,helper);
    cout<<"move "<<n<<" from "<<start<<" to "<<end;
    cout<<endl;
    tower(n-1,helper,start,end);
}
int main(){
    tower(3,"S","H","E");  
return 0;
}