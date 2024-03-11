// 6 5 4 10 11

#include <iostream>
#include <vector>
#include <queue>
#include <map>
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

vector<int> BottomViewBinaryTree(Node *root)
{

   vector<int> ans;
   if(root == NULL){
        return ans;
   }

   queue<pair<Node*,int>> q;
   q.push(make_pair(root,0));

   map<int,int> m;
   
   while(!q.empty()){
    int nodesAtCurrLevel = q.size();
    while(nodesAtCurrLevel--){
        
        pair<Node*,int> p = q.front();
        Node* currNode = p.first;
        int currColumn = p.second;

        q.pop();

        m[currColumn] = currNode->val;

        if(currNode->left){
            q.push(make_pair(currNode->left,currColumn-1));
        }

        if(currNode->right){
            q.push(make_pair(currNode->right,currColumn+1));
        }
 
    }
   }

   for(auto it : m){
    ans.push_back(it.second);
   }
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

    vector<int> ans = BottomViewBinaryTree(root);
    for (auto ele : ans)
    {
        cout << ele << " ";
    }

    return 0;
}