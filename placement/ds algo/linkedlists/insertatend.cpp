#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    // Node(int val){
    //     this->data = val;
    //     this->next = NULL;
    // }
};

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
}


void insertatend(Node* &head,int val){

    Node *newnode = new Node();
    Node *temp = new Node();
    newnode->data = val;
        if(head == NULL){
        head = newnode;
        return ;
    }
    temp = head;
    while (temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    
}


int main(){
    Node* head = NULL;
    
for(int i = 0;i<10;i++){
    insertatend(head,i);
}
    print(head);
return 0;
}