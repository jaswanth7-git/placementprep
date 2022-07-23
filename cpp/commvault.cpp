#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class file
{
private:
    /* data */
    string content;
    int fileid;
    int commmitid;
public:
    string filename;
    string filetype;
    int getid(){
        return fileid;
    }
    void setid(int id){
        this.fileid = id; 
    }
    int getcid(){
        return commmitid;
    } 
    void setcid(int id){
        this.commmitid = commmitid;
    }
};







int main(){
    
return 0;
}