#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
    public : 

    int data;
    vector<Node*> childrens;

    Node (int data){
        this->data = data;
    }

};

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
Node * root = new Node(1);

    root->childrens.push_back(new Node(2));
    root->childrens.push_back(new Node(3));
    root->childrens.push_back(new Node(4));
    root->childrens[0]->childrens.push_back(new Node(5));
    root->childrens[0]->childrens.push_back(new Node(6));
    root->childrens[2]->childrens.push_back(new Node(7));
    
levelOrdertraversal(root);
    

    return 0;
}