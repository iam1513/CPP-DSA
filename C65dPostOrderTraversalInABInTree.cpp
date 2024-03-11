// PostOrder Traversal

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

void PostOrderTraversal(Node* rootNode){

    // base case
    if(rootNode == NULL) return ;

    // recursive call
    PostOrderTraversal(rootNode->left);
    // recursive call
    PostOrderTraversal(rootNode->right);
    cout<<rootNode->val<<" ";
    

}

int main(){
   
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);

    PostOrderTraversal(root);

    return 0;
}