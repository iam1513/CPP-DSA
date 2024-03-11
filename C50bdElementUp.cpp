//Update element at k th position
#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int val){
    Node* new_node = new Node(val);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    
    temp->next = new_node;

}

void insertAtHead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next = head;//Changed head to next
    head = new_node;//then we declare head as the element we want insert 
}

void insertAtPosition(Node* &head,int val,int pos){
    if(pos == 0){
        insertAtHead(head,val);
        return;
    }

    Node* new_node = new Node(val); 

    Node* temp = head;
    int current_pos = 0;
    while(current_pos!=pos-1){
        temp = temp->next;
        current_pos++;
    }

    //temp is pointing to node at pos -1
    new_node->next = temp->next;
    temp->next = new_node;
}

void updateAtPosition(Node* &head, int k, int val){
    Node* temp  = head;
    int curr_pos = 0;

    while(curr_pos!=k){
        temp=temp->next;
        curr_pos++;
    }
    //temp will be pointing to kth node
    temp->val = val;
}

void display(Node* head){
    //Traversing Linked List
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    
    Node* head = NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,4);
    display(head);
    insertAtTail(head,6);
    display(head);

    insertAtPosition(head,9,1);
    display(head);

    updateAtPosition(head,1,3);
    display(head);

    return 0;
}