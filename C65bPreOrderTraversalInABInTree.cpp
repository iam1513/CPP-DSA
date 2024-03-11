/*    TRAVERSALS

       * DFS - Depth First Search
       - Travel along height  
          
          1.PreOrder 2.PostOrder 3.IOrder
*/



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

void preOrderTraversal(Node* rootNode){

    // base case
    if(rootNode == NULL) return ;

    cout<<rootNode->val<<" ";

    // recursive call
    preOrderTraversal(rootNode->left);
    preOrderTraversal(rootNode->right);

}

int main(){
   
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);

    preOrderTraversal(root);

    return 0;
}