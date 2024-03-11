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

int maxDepth(Node* rootNode){
    // base case
    if(rootNode == NULL){
        return 0;
    }

   // recursive case
   int leftDepth = maxDepth(rootNode->left);
   int rightDepth = maxDepth(rootNode->right);

   return (max(leftDepth,rightDepth) + 1 );

}

int main(){

    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);
    root->right->right->right = new Node(12);

    cout<<maxDepth(root);

    return 0;

}