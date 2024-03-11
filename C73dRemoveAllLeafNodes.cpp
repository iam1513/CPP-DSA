// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
//     public:

//     int value;
//     Node* left; 
//     Node* right;

//     Node(int v){
//         value = v;
//         left = right = NULL;
//     }

// };

// class BST{
//     public:
//     Node* root;

//     BST(){
//         root = NULL;
//     }
// };

// // void insert(Node* &root, int val){
// //     Node* newNode  = new Node(val);
// //     if(root == NULL){
// //         root = newNode;
// //         return;
// //     }

// //     Node* curr = root;

// //     while(true){
// //         if(root-> value > val){
// //             if(curr->left == NULL){
// //                 curr->left = newNode;
// //                 return;
// //             }
// //             curr = curr->left;
// //         }
// //         else{
// //             if(curr->right == NULL){
// //                 curr->right = newNode;
// //                 return;
// //             }
// //             curr = curr->right;
// //         }
// //     }
// // }


// // Recursive
// Node* insert(Node* root, int val){
    
//     if(root == NULL){
//         Node* newNode = new Node(val);
//         return newNode;
//     }

//     if(root->value > val){
//         root->left = insert(root->left,val);

//     }
//     else if(root->value <= val){
//         root->right = insert(root->right,val);

//     }

//     return root;
// }

// vector<int> traverse(Node* root,vector<int> &ans){
    
//     if(root == NULL) return ans;
//     traverse(root->left,ans);
//     ans.push_back(root->value);
//     traverse(root->right,ans);

//     return ans;
// }


// int main(){

//     BST tree1;

//     tree1.root = insert(tree1.root, 8);
//     tree1.root = insert(tree1.root, 3);
//     tree1.root = insert(tree1.root, 1);
//     tree1.root = insert(tree1.root, 6);
//     tree1.root = insert(tree1.root, 4);
//     tree1.root = insert(tree1.root, 7);
//     tree1.root = insert(tree1.root, 10);
//     tree1.root = insert(tree1.root, 14);
//     tree1.root = insert(tree1.root, 13);
    
//     vector<int> v ;
//     traverse(tree1.root,v);
//     int n = v.size();

//     int key = 10;

//     vector<int> ans;

//     for(int i = 0; i < n; i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;

//     for(int i = 1; i < n; i++){
//         if(v[i] == key){
//             cout<<v[i-1]<<endl;
//             cout<<v[i+1]<<endl;
//             break;
//         }
//     }
 
//     return 0;
// }


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


void inorderPreSucc(Node* root, Node* &pre, Node* &succ, int key){
    if(root == NULL){
        return ;
    }

    if(root-> value == key){
        // pre -> rightmost val in left subtree
        if(root->left!=NULL){
            Node* temp = root->left;
            while(temp->right){
                temp = temp->right;
            }
            pre = temp;
        }

        // succ -> leftmost val in right most subtree
        if(root->right != NULL){
            Node* temp = root -> right;
            while(temp->left){
                temp = temp->left;
            }
            succ = temp;
        }
        return ;
    }

    if(root-> value > key){
        succ = root;
        inorderPreSucc(root->left,pre,succ,key);
    }

    else if(root-> value < key){
        pre = root;
        inorderPreSucc(root->right,pre,succ,key);
    }
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
    
    Node* pre = NULL;
    Node* succ = NULL;
    int key = 8;

    inorderPreSucc(tree1.root,pre,succ,key);

    if(pre!=NULL){
        cout<<"PRE - "<<pre->value<<endl;
    }
    else{
        cout<<"Pre not present"<<endl;
    }

    if(succ!=NULL){
        cout<<"SUCC - "<<succ->value<<endl;
    }
    else{
        cout<<"Succ not present"<<endl;
    }

    return 0;
}