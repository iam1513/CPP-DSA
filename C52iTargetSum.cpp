#include<iostream>
#include<vector>
using namespace std;

class Node{

    public:
    int val;//Value can be of any data type
    Node* next;
    Node* prev;

    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }

};

class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }

    void insertAtEnd(int val){

        Node* new_node = new Node(val);
        if(tail==NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return ;
    }

    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }cout<<endl;
    }
};

bool isCriticalPoint(Node* &currNode){
    if(currNode->prev->val < currNode->val && currNode->next->val < currNode->val){//Local max
            return true;
    }
    if(currNode->prev->val > currNode->val && currNode->next->val > currNode->val){//Local min
            return true;
    }

    return false;
}

vector<int> pairSumDll(Node* head, Node* tail,int x){
   
vector<int> ans(2,-1);

    while(head != tail){
        int sum = head->val + tail->val;
        if(sum==x){
            ans[0]=head->val;
            ans[1]=tail->val;
            return ans;
        }

        if(sum>x){//need smaller val, so tail will be moved back
            tail = tail -> prev;
        }
        else{
            head = head -> next;
        }
    }
    return ans;
}

int main(){

    DoublyLinkedList dll;

    dll.insertAtEnd(2);
    dll.insertAtEnd(5);
    dll.insertAtEnd(6);
    dll.insertAtEnd(8);
    dll.insertAtEnd(10);

    dll.display();

    vector<int> ans = pairSumDll(dll.head,dll.tail,11);
    cout<<"First Num: "<<ans[0]<<" and "<<"Second Num: "<<ans[1]<<endl;
    
    return 0;
}