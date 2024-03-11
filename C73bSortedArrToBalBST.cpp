#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:

    int value;
    Node* left; 
    Node* right;

    Node(int v){
        value = v;
        left = right = NULL;
    }

};

class BST{
    public:
    Node* root;

    BST(){
        root = NULL;
    }
};

// void insert(Node* &root, int val){
//     Node* newNode  = new Node(val);
//     if(root == NULL){
//         root = newNode;
//         return;
//     }

//     Node* curr = root;

//     while(true){
//         if(root-> value > val){
//             if(curr->left == NULL){
//                 curr->left = newNode;
//                 return;
//             }
//             curr = curr->left;
//         }
//         else{
//             if(curr->right == NULL){
//                 curr->right = newNode;
//                 return;
//             }
//             curr = curr->right;
//         }
//     }
// }


// Recursive
Node* insert(Node* root, int val){
    
    if(root == NULL){
        Node* newNode = new Node(val);
        return newNode;
    }

    if(root->value > val){
        root->left = insert(root->left,val);

    }
    else if(root->value <= val){
        root->right = insert(root->right,val);

    }

    return root;
}

void traverse(Node* root){

    if(root == NULL) return ;
    cout<<root->value<<" ";
    traverse(root->left);
    
    traverse(root->right);
}


Node* ArrayToBst(vector<int> v, int start, int end){
    // Base case
    if(start>end){
        return NULL;
    }

    int mid = (start+end)/2;
    Node* root = new Node(v[mid]);

    root->left = ArrayToBst(v,start,mid-1);
    root->right = ArrayToBst(v,mid+1,end);

    return root;

} 

int main(){

    vector<int> v = {1,2,3,4,5,6,7};
    int n = v.size();

    BST tree ;
    tree.root = ArrayToBst(v,0,n-1);

    traverse(tree.root);
 
    return 0;
}