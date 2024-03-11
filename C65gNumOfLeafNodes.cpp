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

int numOfLeafNodes(Node* rootNode){
    // base case
    if(rootNode == NULL){
        return 0;
    }

    if(rootNode->left == NULL && rootNode->right == NULL){
        return 1;
    }

    // recursive case
    int leftSubtreeLeafNodes = numOfLeafNodes(rootNode->left);
    int rightSubtreeLeafNodes = numOfLeafNodes(rootNode->right);

    return  rightSubtreeLeafNodes + leftSubtreeLeafNodes;
}

int main(){

    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);
    root->right->left = new Node(12);

    cout<<numOfLeafNodes(root);

    return 0;

}