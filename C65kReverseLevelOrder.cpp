// 6 5 4 10 11

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int value)
    {
        val = value;
        left = NULL;
        right = NULL;
    }
};

vector<int> reverseLevelOrder(Node* root){
    
    vector<int> ans;
    if(root == NULL){
        return ans;
    }

    queue<Node*> q;
    stack<Node*> st;
    q.push(root);

    while(!q.empty()){

        int nodesAtCurrLevel = q.size();
        
        while(nodesAtCurrLevel --){
            Node* currNode = q.front();
            q.pop();
            st.push(currNode);

            if(currNode->right){
                q.push(currNode->right);
            }

            if(currNode->left){
                q.push(currNode->left);
            }

        }
    }

    while(!st.empty()){
        ans.push_back(st.top()->val);
        st.pop();
    }
    return ans;
}

int main()
{

    Node *root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    // root->left->left->right= new Node(12);
    root->left->right = new Node(5);
    root->right->right = new Node(11);

    vector<int> ans = reverseLevelOrder(root);
    for (auto ele : ans)
    {
        cout << ele << " ";
    }

    return 0;
}