// LevelOrder ---> Will use for this

#include<iostream>
#include<queue>
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

void levelOrderTraversal(Node* rootNode){
    if(rootNode == NULL) return ;

    queue<Node*> q;
    q.push(rootNode);

    while(!q.empty()){
        int nodesAtCurrLevel = q.size();
        while(nodesAtCurrLevel--){
            Node* currNode = q.front();
            q.pop();
            cout<<currNode->val<<" ";
 
            if(currNode->left){
                q.push(currNode->left);
            }
            if(currNode->right){
                q.push(currNode->right);
            }
        }
        cout<<endl;
    }

}

int main(){ 
   
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);

    levelOrderTraversal(root);

    return 0;
}