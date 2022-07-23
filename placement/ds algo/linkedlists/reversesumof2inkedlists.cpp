#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
};

void out(Node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
}


int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    
Node* temp = head;
string a = "";
while (temp !=NULL)
{
    a+=to_string(temp->data);
    temp = temp->next;
}

string b = "453";

reverse(a.begin(), a.end());
reverse(b.begin(), b.end());

int an = stoi(a)+stoi(b);

string ans =  "";
ans = to_string(an);
reverse(ans.begin(),ans.end());

temp = head;
for(int i = 0;i<ans.length();i++){
    int c = (int)ans[i]-48;
    temp->data = c;
    temp = temp->next;
}
out(head);

out(head);
return 0;
}       