//Inserting element at the end
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

    return 0;
}

//TC : O(n) if tail ptsr isnt given
// if tail ptr is given , it will be O(1)