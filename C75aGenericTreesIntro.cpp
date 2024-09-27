#include<iostream>
#include<vector>
using namespace std;

class Node{
    public : 

    int data;
    vector<Node*> childrens;

    Node (int data){
        this->data = data;
    }

};

void preOrderTraversal(Node * root){
    if(root== NULL){
        return ;
    }

    cout<<root->data<<" ";
    for(int i = 0; i < root->childrens.size(); i++){
        preOrderTraversal(root->childrens[i]);
    }
}

void inOrderTraversal(Node * root){
    if(root== NULL){
        return ;
    }

    int childs = root->childrens.size();
    for(int i = 0; i <childs -1; i++){
        inOrderTraversal(root->childrens[i]);
        
    }
    cout<<root->data<<" ";
    
    if(childs > 0){
        inOrderTraversal(root->childrens[childs-1]);
    }
}

void postOrderTraversal(Node * root){
    if(root== NULL){
        return ;
    }

    for(int i = 0; i < root->childrens.size(); i++){
        preOrderTraversal(root->childrens[i]);
    }
    
    cout<<root->data<<" ";
}

int main(){

    Node * root = new Node(1);

    root->childrens.push_back(new Node(2));
    root->childrens.push_back(new Node(3));
    root->childrens.push_back(new Node(4));
    root->childrens[0]->childrens.push_back(new Node(5));
    root->childrens[0]->childrens.push_back(new Node(6));
    root->childrens[2]->childrens.push_back(new Node(7));

cout<<"PREORDER : ";
preOrderTraversal(root);
cout<<endl;
cout<<"INORDER : ";
inOrderTraversal(root);
cout<<endl;

cout<<"POSORDER : ";
postOrderTraversal(root);
cout<<endl;
    return 0;
}