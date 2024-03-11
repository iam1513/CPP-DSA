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


Node* LowestCommAnc(Node* root, Node* n1, Node* n2){

    // Base case
    if(root == NULL) return NULL;
    if(root-> value > n1 -> value && root-> value > n2 -> value ){
        // lca will lie in left sub tree
        return LowestCommAnc(root->left,n1,n2);
    }

    if(root-> value < n1 -> value && root-> value < n2 -> value ){
        // lca will lie in right sub tree
        return LowestCommAnc(root->right,n1,n2);
    }

    // if root val lies between n1 and n2 or equal to n1 and n2
    return root;
}

int main(){

    BST tree1;

    tree1.root = insert(tree1.root, 8);
    tree1.root = insert(tree1.root, 3);
    tree1.root = insert(tree1.root, 1);
    tree1.root = insert(tree1.root, 6);
    tree1.root = insert(tree1.root, 4);
    tree1.root = insert(tree1.root, 7);
    tree1.root = insert(tree1.root, 10);
    tree1.root = insert(tree1.root, 14);
    tree1.root = insert(tree1.root, 13);
    
    Node* n1 = new Node(1);
    Node* n2 = new Node(6);

    Node* temp = LowestCommAnc(tree1.root,n1,n2);

    cout<<temp->value<<endl;
 
    return 0;
}