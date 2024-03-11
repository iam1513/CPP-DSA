#include<iostream>
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

bool search(Node* root, int key){
    // Base case
    if(root == NULL){
        return false;
    }

    if(root->value == key){
        return true;
    }

    // Recursive case
    if(root->value<key){
        return search(root->right,key);
    }

    if(root->value > key){
        return search(root->left,key);
    }

}

Node* largestNodeBST(Node* root){
    Node* curr = root;

    while(curr && curr->right){
        curr = curr->right;
    }
    return curr;
}

Node* deleteBST(Node* root, int key){
    if (root == NULL) return NULL;

    if(root->value > key){
        root ->left = deleteBST(root->left,key);
    }

    else if(root->value < key){
        root -> right = deleteBST(root->right,key);
    }

    else{

        if(root -> right == NULL && root-> left == NULL){
            free(root);
            return NULL;
        }
        else if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            // return NULL;
            return temp;
        }

        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            // return NULL;
            return temp;
        }

        else{
            Node* justSmallerValue = largestNodeBST(root->left);
            root -> value = justSmallerValue-> value;
            root -> left = deleteBST(root->left,justSmallerValue->value);

        }
    }

    return root;
}

void traverse(Node* root){

    if(root == NULL) return ;
    traverse(root->left);
    cout<<root->value<<" ";
    traverse(root->right);
}

int main(){

    BST tree1; 
    // insert(tree1.root,3);
    // insert(tree1.root,1);
    // insert(tree1.root,5);

    tree1.root = insert(tree1.root, 3);
    tree1.root = insert(tree1.root, 1);
    tree1.root = insert(tree1.root, 5);
    tree1.root = insert(tree1.root, 9);
    tree1.root = insert(tree1.root, 2);

    traverse(tree1.root);
    cout<<endl;
    cout<<search(tree1.root, 3)<<endl;

    deleteBST(tree1.root,3);
    traverse(tree1.root);
    cout<<endl;
 
    return 0;
}