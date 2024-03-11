//Given a head of a singly linked list , reveverse the list and return the reversed list.
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

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head=new_node;
            return;
        }

        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;

    }

};

Node* reverseLL(Node* &head){
    Node* prevptr = NULL;
    Node* currptr = head;
    // currptr->next = prevptr
    // and move all ptr by 1
    while(currptr!=NULL){
        Node* nextptr = currptr->next;//To store value of next node so we wont loose link once we change the link
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }

    //When this loop ends, prevptr will be pointing to our last node
    Node* new_head = prevptr;
    return new_head;
}

int main(){
    
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    ll.display();
    ll.head = reverseLL(ll.head);
    ll.display();

    return 0;
}