#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *right;
        Node *left;
        Node (int val){
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }
};


void inorder(Node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
}


Node* createbinarytree(){
    int ele;
    cout<<"Enter data: ";
    cin>>ele;
    if(ele == -1){
        return NULL;
    }
    Node * root = new Node(ele);
    cout<<"Enter element left to "<<ele<<": ";
    root->left = createbinarytree();
    cout<<"Enter element right to "<<ele<<": ";
    root->right = createbinarytree();
    return root;
}

int main(){
   Node* root = createbinarytree();
   inorder(root);
return 0;
}