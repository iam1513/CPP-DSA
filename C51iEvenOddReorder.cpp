//Given the head of singly LL, grp all the nodes with the odd indices together followed by the nodes with even indices, and return reordered list.

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
            head = new_node;
            return;
        }

        Node* temp = head;

        while(temp->next){
            temp =temp -> next;
        }
        temp -> next = new_node;
    }

        void display(){

            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->val<<"->";
                temp = temp->next;
            }cout<<"NULL"<<endl;
        }
    
};

Node* oddEvenLinkedList(Node* &head){

    if(!head){
        return head;
    }
    Node* evenHead = head->next;
    Node* oddPtr = head;
    Node* evenPtr = evenHead;

    while(evenPtr && evenPtr->next){
        oddPtr -> next = oddPtr->next->next;
        evenPtr->next = evenPtr->next->next;
        oddPtr = oddPtr->next;
        evenPtr = evenPtr->next;

    }

    oddPtr -> next = evenHead;
    return head;
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

    ll.head = oddEvenLinkedList(ll.head);
    ll.display();

    return 0;
}