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
    void removeLoop(Node* &head)
    {
       
        Node *runner1;
        Node *runner2;
        runner1 = head;
        runner2 = head;
        while(runner1 != NULL && runner2 != NULL && runner2->next != NULL){
            runner1 = runner1->next;
            runner2 = runner2->next->next;
            if(runner1 == runner2){
                break;
            }
 
        }
        if(runner1 != runner2){
            cout<<"No Loop detected in the Given Linked list";
        }
        
          if(runner1 == head){
              while(runner2->next != runner1){
                  runner2 = runner2->next;
              }runner2->next = NULL;
              cout<<"Loop deleted";
          }else if(runner1 == runner2){
              runner1 = head;
                
                while(runner1->next != runner2->next){
                    runner1 = runner1->next;
                    runner2 = runner2->next;
                }runner2->next = NULL;
                cout<<"Loop deleted";
          }
        
                
        return ;
        
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
removeLoop(head);
return 0;
}