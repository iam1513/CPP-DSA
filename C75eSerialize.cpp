#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

class Node {
    public :
     int data;
     vector<Node*> childrens;

     Node(int data){
        this->data = data;
     }
};

void serializeString(Node* root,string & ans){
    if(root == NULL){
        return ;
    }

    ans += to_string(root->data) + ":" + to_string(root->childrens.size())+":";
    for(auto child : root->childrens){
        ans += to_string(child->data)+",";
    }
    if(root->childrens.size())  ans.pop_back(); // To remove the last comma
    ans += '\n';

    for(auto child : root->childrens){
        serializeString(child,ans);
    }
}

int main(){

    Node* root = new Node(10);

    root->childrens.push_back(new Node(2));
    root->childrens.push_back(new Node(34));
    root->childrens.push_back(new Node(56));
    root->childrens.push_back(new Node(10));
    root->childrens[1]->childrens.push_back(new Node(1));
    root->childrens[3]->childrens.push_back(new Node(7));
root->childrens[3]->childrens.push_back(new Node(8));
root->childrens[3]->childrens.push_back(new Node(9));
string ans = "";
serializeString(root,ans);
    cout<<ans;

    return 0;
}
