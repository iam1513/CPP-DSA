#include<iostream>
#include<vector>
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

vector<int> NodesFromTop(Node* rootNode){
    vector<int> ans;
    if(rootNode == NULL){
        return ans;
    }

    queue<Node*> q;
    q.push(rootNode);

    while(!q.empty()){
        int nodesAtCurrLevel = q.size();
        while(nodesAtCurrLevel){

            Node* currNode = q.front();
            q.pop();

            if(nodesAtCurrLevel == 1){
                ans.push_back(currNode->val);
            }
            if(currNode->left){
                q.push(currNode->left);
            }

            if(currNode->right){
                q.push(currNode->right);
            }
            nodesAtCurrLevel-- ;
        }
        
    }
    
    return ans;

}

int main(){

    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    // root->left->left->right= new Node(12);
    root->left->right = new Node(5);
    root->right->right = new Node(11);

    vector<int> ans = NodesFromTop(root);
    for(auto ele:ans){
        cout<<ele<<" ";
    }
    
    return 0;

}