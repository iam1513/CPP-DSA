#include<iostream>
#include<vector>
using namespace std;

class Node {
    public :
     int data;
     vector<Node*> childrens;

     Node(int data){
        this->data = data;
     }
};

void justGreater(Node* root,int &ans,int &target){

    if(root == NULL){
        return ;
    }

    if(root->data > target && root->data < ans){
        ans = root->data;
    }

    for(int i = 0; i < root->childrens.size(); i++){
        justGreater(root->childrens[i],ans,target);
    }
}

int main(){

    Node* root = new Node(20);

    root->childrens.push_back(new Node(8));
    root->childrens.push_back(new Node(22));
    root->childrens[0]->childrens.push_back(new Node(1));
    root->childrens[0]->childrens.push_back(new Node(12));
    root->childrens[0]->childrens[1]->childrens.push_back(new Node(10));
    root->childrens[0]->childrens[1]->childrens.push_back(new Node(14));
    int ans = 1000,target=10;
    justGreater(root,ans,target);
    cout<<ans<<endl;

    return 0;
}