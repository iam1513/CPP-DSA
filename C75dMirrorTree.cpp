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

void mirrorTree(Node* root){
    if(root==NULL){
        return ;
    }

    if(root->childrens.size() <2){
        return ;
    }

    reverse(root->childrens.begin(),root->childrens.end());

    for(auto child:root->childrens){
        mirrorTree(child);
    }
}

void levelOrdertraversal(Node * root){
    queue<Node*> qu;

    qu.push(root);
    while(!qu.empty()){
        int n = qu.size();
        while(n--){
            Node * f = qu.front();
            int x = f->childrens.size();
            qu.pop();
            cout<<f->data<<" ";

            for(int i = 0; i < x; i++){
                qu.push(f->childrens[i]);
            }
        }
        cout<<endl;
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
levelOrdertraversal(root);
cout<<endl;
    mirrorTree(root);
    levelOrdertraversal(root);

    return 0;
}

/**
 * TC : O(n)
 * SC : O(h)+O(m)---> Stack space + queue space where m is max no. of elements at some level
 */