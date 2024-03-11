// Column approach
// Keep tack of columns
// Add -1 whenever go to left and add 1 whenever we go right
// Col of left child  = column of parent - 1 &&  Col of right child  = column of parent + 1
// Root is at column
// Queue - Pair (Node, Column)
// Map - Coulumn -> value
// if the value in colulmn exist already, move to next column (Will check it witj the help of map)
// 6 4 2 10 11 

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

vector<int> TopViewBinaryTree(Node *root)
{

    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }

    queue<pair<Node *, int>> q; // Queue pair for storing address and column number
    q.push(make_pair(root, 0)); // Push root and column of root in queue at the start

    map<int, int> m; //  Map to store first value in every column

    while (!q.empty())
    {
        int nodesAtCurrLevel = q.size();
        while (nodesAtCurrLevel--)
        {

            pair<Node *, int> p = q.front();
            Node *currNode = p.first;
            int currColumn = p.second;

            q.pop();

            if (m.find(currColumn) == m.end())// No value inserted in map for this column
            {
                m[currColumn] = currNode->val;
            }

            if (currNode->left)
            {
                q.push(make_pair(currNode->left, currColumn - 1));
            }

            if (currNode->right)
            {
                q.push(make_pair(currNode->right, currColumn + 1));
            }
        }
    }

    for (auto it : m)
    {
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

    vector<int> ans = TopViewBinaryTree(root);
    for (auto ele : ans)
    {
        cout << ele << " ";
    }

    return 0;
}