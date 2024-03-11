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

Node* reverseK(Node* &head,int k){

    Node* prevptr = NULL;
    Node* currptr = head;

    int ctr = 0;
    while(currptr != NULL && ctr < k){
        Node* nextptr = currptr->next;
        currptr -> next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        ctr++;
    }

    if(currptr!=NULL){
        Node* new_head = reverseK(currptr,k);
        head -> next = new_head;
    }

    return prevptr;

}

int main(){
    
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();
    ll.head = reverseK(ll.head,2);
    ll.display();

    return 0;
}