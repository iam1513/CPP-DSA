/*
       TREES
       - Non - linear stores hierarchical data
       - elements are stored at different levels
       - elements are called nodes, which are connected together to represent hierarchy
      
       * Terminologies
       - root 
       - child node
       - parent node
       - sibling nodes
       - leaf node
       - no of edges - link between two nodes 
       - level - no of edges from root node
       - height = width = max of all edges
       - size - no of nodes in a tree
       - subtree

       * Types of tree
       1. Generic trees - A node can have any num of childs
       2. Binary trees - A node can max two childs
       3. Binary search tree(BST) - Binary Tree in which all nodes in a left subtree will have value less than root node 
                               and all nodes in right subtree have values more than root node value.
       4. AVL Trees - Difference betn heights of left and right subtree can be 0,1,-1



       # BINARY TREE
       - Every node can have max 2 childs
       - every node will contain 
           1.data   2.Link to left child     3.Link to right child 
           - if chill does not exit , pointer will point to null
*/ 

//  BINARY TREE

#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int value){
        val = value;
        left = NULL;
        right = NULL;
    }
};

int main(){

    Node* root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(4);

    cout<<"Root Node : "<< root-> val<<endl;
    cout<<"Right child : "<< root-> right ->val<<endl;
    cout<<"Left Child : "<< root->left -> val<<endl;


    return 0;
}